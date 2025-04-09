
# Dual Axis Solar Tracker System

This project is a **Dual Axis Solar Tracker System** built using **Arduino** and **embedded systems**. It uses **4 LDR sensors** and **2 servo motors** to track the position of the sun and adjust the orientation of a solar panel in real-time, maximizing solar energy capture.

---

## 📦 Features

-**Dual axis movement** – tracks both horizontal and vertical sun positions
-**Light-based tracking** using 4 LDRs (Light Dependent Resistors)
-**Automatic servo adjustment** for precise alignment
-**Arduino-powered** with real-time analog input processing
-Safety limits to avoid servo over-rotation

---

## ⚙️ Components Used

- Arduino Uno
- 2x Servo Motors
- 4x LDRs (Light Dependent Resistors)
- 4x 10kΩ Resistors
- Jumper Wires
- Breadboard
- (Optional) Solar Panel for demonstration

---

## 🧠 Working Principle

- The 4 LDRs are positioned at the corners of the panel.
- Arduino reads analog light values from each LDR.
- Based on intensity differences:
  - Horizontal servo moves **left/right**.
  - Vertical servo moves **up/down**.
- The panel constantly realigns to face the direction with maximum light.

---

## 🧪 Simulation

You can simulate this project using Proteus 9 software, or test it on real hardware. Adjust a flashlight or room light to see the servos in action.

---

## 📁 Files

- `DualAxisSolarTracker.ino`: Main Arduino code
- `Proteus Simulation.pdsprj`: Simulation File
- `README.md`: Project description

---

> by Sajal Bajaj  
> Final Year Project (Embedded Systems CS-733)
