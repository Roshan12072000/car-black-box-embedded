# 🚗 Car Black Box System – Embedded C Project

## 📌 Project Overview

The Car Black Box System is an automotive embedded application developed using the PIC18F4580 microcontroller to monitor and log critical vehicle events.

Similar to an aircraft black box, the system records important driving parameters such as speed, gear changes, and other events for post-analysis and vehicle diagnostics.

---

## ⚙️ System Working Principle

The system continuously reads vehicle parameters through sensors and displays real-time information on an LCD.

Whenever a critical event occurs, the system records:

* Event type
* Event time
* Vehicle speed

The logged data is stored in EEPROM memory for later review.

---

## 🖥️ System Screens / Output

### 1️⃣ Default Dashboard Screen

Displays:

* Current time
* Latest event
* Vehicle speed

Example:

```
Time : 12:45:10
Event : GN
Speed : 45 km/h
```

---

### 2️⃣ Main Menu

```
1. View Log
2. Set Time
```

Navigation is performed using push buttons.

---

### 3️⃣ Log View Screen

Displays stored vehicle events.

```
Log  Event  Time      Speed
0    GN     12:30:10  40
1    GR     12:31:22  35
```

Users can scroll through recorded logs.

---

### 4️⃣ Time Setting Screen

Allows real-time clock adjustment.

```
Set Time :
HH : MM : SS
```

---

## 🚀 Features

* Real-time vehicle monitoring
* Speed measurement using ADC
* Gear position tracking
* Event logging with timestamp
* EEPROM storage
* LCD display interface
* Menu-driven navigation

---

## 🛠️ Hardware Components

* PIC18F4580 Microcontroller
* 16×2 CLCD Display
* ADC Speed Sensor
* Push Buttons / Switches
* EEPROM
* RTC Timer

---

## 💻 Software Tools

* Embedded C
* MPLAB IDE
* XC8 Compiler
* Makefile

---

## 📂 Project Structure

```
Car_Black_Box/
│
├── main.c
├── adc.c
├── clcd.c
├── clcd.h
├── black_box.h
├── Makefile
├── README.md
```

---

## ▶️ Build Instructions

```
make
```

Clean build:

```
make clean
```

---

## 🎯 Applications

* Automotive accident analysis
* Fleet monitoring systems
* Driver behavior tracking
* Vehicle diagnostics
* Safety compliance systems

---

## 📚 Learning Outcomes

* Embedded firmware design
* Peripheral interfacing
* ADC data acquisition
* EEPROM logging
* LCD driver development
* Event data recording

---

## 👨‍💻 Author

**Roshan Jameer**
GitHub: https://github.com/Roshan12072000

---

## 📜 Note

This project was implemented as part of embedded systems learning to understand automotive event data recording systems.
