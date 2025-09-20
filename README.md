# 📡 Stationary Sonar Sensor (Arduino-Based)

A distance-sensing system built with ultrasonic sensors and Arduino, designed to detect nearby objects and trigger visual/auditory feedback. This project demonstrates real-time environmental awareness using HC-SR04 sensors, LEDs, and a piezo buzzer.

## 🧠 Project Overview

This stationary sonar setup uses ultrasonic sensors to measure distance and respond based on proximity thresholds. It’s ideal for learning sensor integration, conditional logic, and feedback systems — and can be extended into robotics, security, or accessibility applications.

## 🛠️ Hardware Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper wires
- Piezo buzzer
- RGB LED (status indicator)

## 🔍 System Logic

1. **Distance Detection**  
   - Ultrasonic sensors measure distance to nearby objects.
   - Readings are processed in real time via Arduino.

2. **Feedback Response**  
   - If an object is detected within a set threshold:
     - LED lights up (depending on distance)
     - Buzzer activates (constant or pulsed tone when object is within <20cm of range)

3. **Serial Monitoring**  
   - Distance readings are output via serial for debugging or visualization.

## 📸 Circuit Layout

See the included image in `SSSensorMedia/` for breadboard wiring and component placement.  
*(Image shows dual ultrasonic sensors, buzzer, LED, and Arduino connections.)*

## 📁 Files Included

- `main.cpp` — Main Arduino sketch
- `README.md` — Project documentation
- `SSSensorMedia/` — Circuit image and media assets
