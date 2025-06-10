# ESP32_EnvMonitor
Real-time environmental monitor using ESP32 and LCD
A low-cost, Arduino-based environmental monitoring system that simulates real-time temperature tracking using a potentiometer and displays it on a 16x2 LCD. Built using the ESP32-WROVER Dev Board, this project showcases embedded system design for applications in rural health, smart infrastructure, and public safety.

## Why This Project Matters

Access to environmental data is vital for public health, especially in underserved and climate-vulnerable communities. This project demonstrates how embedded systems can provide scalable, low-cost environmental monitoring that supports:

- Early detection of unsafe indoor conditions (e.g., heat-related stress)
- Smart alerts for air quality in makeshift housing, schools, or rural clinics
- Citizen-led data collection to support public policy and climate resilience

Its open-source nature and <$20 bill of materials make it deployable in classrooms, community centers, and emergency shelters — promoting technical education and health equity at scale.

## Hardware Used

- ESP32-WROVER (Freenove Dev Board)
- 10k Potentiometer (to simulate sensor data)
- 16x2 LCD Display (can be swapped with OLED)
- Breadboard + Jumper Wires
- Arduino IDE for firmware development

## ⚙️ Features

- Simulates analog sensor data via potentiometer
- Displays temperature in real-time on LCD
- Logs values to Serial Monitor for development/debugging
- Easily expandable to include DHT11/MQ sensors or cloud integration (e.g., Firebase, ThingSpeak)
- Designed with low-power and OTA update support in mind
