#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX, TX

// Motor control pins
#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

void setup() {
  // Motor pins as output
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // LED for status (optional)
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
  BT.begin(9600); // HC-05 default speed
  Serial.println("Bluetooth Motor Control Ready");
  BT.println("Motor Control Ready");
}

void loop() {
  if (BT.available()) {
    char cmd = BT.read();
    Serial.print("Received: ");
    Serial.println(cmd);

    switch (cmd) {
      case 'F': // Forward
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        BT.println("Forward");
        break;

      case 'B': // Backward
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        BT.println("Backward");
        break;

      case 'L': // Left
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        BT.println("Left");
        break;

      case 'R': // Right
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        BT.println("Right");
        break;

      case 'S': // Stop
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        BT.println("Stop");
        break;

      case '1': // Optional — LED ON
        digitalWrite(LED_BUILTIN, HIGH);
        BT.println("LED ON");
        break;

      case '0': // Optional — LED OFF
        digitalWrite(LED_BUILTIN, LOW);
        BT.println("LED OFF");
        break;
    }
  }
}
