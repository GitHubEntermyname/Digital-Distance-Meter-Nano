# 📏 Digital Distance Meter Nano

### 📌 Overview
This project is a **Digital Distance Meter** built using an **Arduino Nano**, an **ultrasonic sensor**, and an **I2C LCD display**.  
It measures distance in **centimeters, inches, and feet**, and displays the results in real time.

### ⚙️ Features
- Measures distance using ultrasonic sensor (HC-SR04)  
- Displays output on 16x2 I2C LCD  
- Converts and shows distance in cm, inches, and feet  
- Auto-switches display format based on range  
- Compact and low-power setup using Arduino Nano

### 🛠️ Components
- Arduino Nano  
- HC-SR04 Ultrasonic Sensor  
- I2C 16x2 LCD Display  
- Jumper wires  
- Breadboard or custom PCB  
- 5V power supply or USB

### 📂 Files
- `src/DistanceMeter.ino` → Arduino sketch  
- `.gitignore` → ignored files configuration  
- `.gitattributes` → repository attributes  
- `README.md` → project documentation  

### 🚀 How It Works
- The ultrasonic sensor sends a pulse and measures the time it takes to reflect back.  
- The code calculates distance using the speed of sound and converts it to cm, inches, and feet.  
- The LCD displays the result, switching between inches/cm and feet/inches depending on range.

### 📚 Required Libraries
- [LiquidCrystal_I2C](https://github.com/johnrickman/LiquidCrystal_I2C)

### 📸 Project Images
*(Add photos or circuit diagrams here once uploaded)*

### 🙌 Acknowledgment
Developed as part of my **Mechatronics Engineering coursework**, showcasing sensor integration, embedded programming, and real-time display systems.
