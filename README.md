# 🌿 Irrig — Smart Irrigation System

**Irrig** is a smart irrigation system designed to help users maintain healthy plants effortlessly. The system monitors soil moisture levels and automatically activates a water pump when moisture drops below a threshold specific to the plant’s needs. It’s ideal for **terrestrial plants** (those growing in soil) and **lithophytic plants** (those growing on rocks or tree bark).

![Irrig Prototype](docs/irrig_prototype.jpg) <!-- Optional: replace with an image link -->

---

## 🚀 Features

- **Automatic Watering:** Uses a moisture sensor to detect soil hydration and control a water pump.  
- **Plant-Specific Thresholds:** Configurable moisture levels tailored for different plant types.  
- **Expandable Design:** Multiple Irrig “cells” can be linked together to share data via **infrared** or **I²C** communication.  
- **Smart + Dummy Cells:**  
  - *Smart Cells* feature an OLED display and user controls.  
  - *Dummy Cells* connect to Smart Cells and inherit their configurations.  
- **OLED Display:** Visualizes moisture trends over time using a real-time graph.  
- **Rotary Encoder Interface:** Allows users to adjust moisture thresholds and settings easily.  
- **Environmental Control:** Supports LED and UV lights, relays for pumps/humidifiers, and humidity sensors.  

---

## 🧠 System Overview

**Microcontroller:** ESP32  
**Firmware Language:** C / C++  
**Thread Manager:** FreeRTOS  

**Components:**
- Moisture and humidity sensors  
- Relay modules (for water pump and humidifier control)  
- OLED display  
- LED and UV lights  
- Infrared transmitters/receivers  
- Rotary encoder  

---

## 🔗 Communication

- **Wireless Linking:** Infrared (IR) transceivers enable neighboring cells to communicate wirelessly.  
- **Wired Linking:** I²C communication allows data transfer between Smart and Dummy Cells.  

Each Smart Cell can program the connected Dummy Cells with parameters for their respective plants, enabling modular scalability without the need for individual screens or controllers.

---

## 🌱 Motivation

We created Irrig to make plant care easier for busy students and apartment dwellers.  
Many of us have struggled to keep plants alive due to tight schedules, constant moving, or lack of experience. While plants brighten rooms and improve mood, they often die from neglect — creating the opposite effect.

**Irrig** solves this problem by maintaining a healthy environment automatically, ensuring that your greenery thrives no matter how busy life gets.

---

## 🧩 Current Progress

- ✅ Tested individual components (sensors, relays, OLED, ESP32).  
- ⚙️ Next step: Calibrate moisture sensor readings in soil to define plant-specific thresholds.  
- 🔄 Plan: Assemble multiple functional units for use in dorms, apartments, and indoor gardens.  

---

## 📈 Future Goals

- Create modular, user-friendly enclosures for real-world use.  
- Expand compatibility with mobile app controls.  
- Develop adaptive algorithms for plant-specific watering schedules.  

---

## 📂 Repository

Source code and updates are available on GitHub:  
👉 [https://github.com/fkhan224/Irrig](https://github.com/fkhan224/Irrig)

---

## 💡 License

This project is released under the MIT License.  
See [LICENSE](LICENSE) for details.

---

**Authors:**  
Fariha Khan, Ren Ellis, Chris Morgado  