# Bluetooth-Controlled Robotic Car 🏎️

A fully functional robotic car controlled wirelessly via a smartphone using Bluetooth technology. This project integrates an Arduino Uno, HC-05 Bluetooth module, and L298N motor driver to demonstrate principles of embedded systems, wireless communication, and motor control.



## 📌 Project Overview
The "Bluetooth-Controlled Robotic Car" is an embedded system project developed for the Applied Physics course at **NUST College of E&ME**. The car receives real-time commands from a smartphone app, allowing for seamless movement in all directions (Forward, Backward, Left, and Right).

## 🚀 Features
* **Wireless Control:** Controlled via a mobile application through the HC-05 Bluetooth module.
* **Microcontroller Brain:** Powered by an Arduino Uno for command processing.
* **Dual-Motor Drive:** Uses the L298N H-Bridge motor driver for precise directional control.
* **Power Efficiency:** Optimized with high-current Li-ion batteries and a custom power switch to prevent drain.
* **Speed:** Achieved a steady average speed of 1.47 km/h during testing.

## 🛠️ Components Used
| Component | Purpose |
| :--- | :--- |
| **Arduino Uno** | Central Microcontroller |
| **HC-05 Bluetooth Module** | Wireless Communication |
| **L298N Motor Driver** | Motor Control and Power Management |
| **DC Motors (x2)** | Movement/Propulsion |
| **Li-ion Batteries** | Power Source |
| **Chassis** | Structural Framework |
| **Voltage Divider** | Circuit Protection |

## 📐 Circuit Design & Troubleshooting
During development, several engineering challenges were addressed:
1.  **Voltage Regulation:** Implemented a voltage divider to ensure the Bluetooth module received the correct signal voltage.
2.  **Motor Polarity:** Resolved issues where motors rotated in opposite directions by swapping wiring at the driver terminals.
3.  **Power Management:** Added a manual ON/OFF switch to preserve battery life and improve safety.

## 💻 Software Logic
The Arduino code utilizes:
* **Serial Communication:** To interpret characters sent from the smartphone app (e.g., 'F' for Forward).
* **PWM (Pulse Width Modulation):** To maintain consistent and smooth motor speeds.
## 👥 Contributors (DE-47-CE-B)
* **Muhammad Hashir Ehtisham** (543606)
* **Taimoor Atif** (548296)
* **Lameea Mubashir Khan** (570918)
* **Tooba Fatima** (577687) Designing Exterior of the Car

## 🎓 Acknowledgments
This project was completed as part of the **Applied Physics** curriculum at the **Department of Computer and Software Engineering, College of E&ME, NUST**. 

Special thanks to our instructor, **Lec. Sabeen Malik**, for her guidance and support throughout the development of this project.

## 📂 Repository Structure
```text
├── src/                # Arduino Source Code (.ino)
├── docs/               # Project Documentation & Reports
├── images/             # Photos of the car and circuit diagrams
└── README.md           # Project Overview
