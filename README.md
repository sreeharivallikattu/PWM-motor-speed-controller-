# PWM Motor Speed Controller using Arduino UNO

## Overview

This project implements a PWM Motor Speed Controller using an Arduino UNO, a DC motor, a potentiometer, and a MOSFET driver circuit.

The system allows smooth control of motor speed by adjusting a potentiometer. The Arduino reads the potentiometer value through its Analog-to-Digital Converter (ADC) and generates a Pulse Width Modulation (PWM) signal to control the motor speed.

This project demonstrates fundamental concepts in embedded systems, motor control, and power electronics.

---

## Features

- Smooth DC motor speed control
- PWM-based motor driving
- Analog input reading using ADC
- MOSFET motor driver circuit
- Flyback diode protection
- External motor power supply

---

## Hardware Components

- Arduino UNO
- DC Motor
- N-Channel MOSFET
- Flyback Diode
- 10k Potentiometer
- 9V Battery
- Breadboard
- Jumper Wires

---

## Circuit Connections

| Arduino Pin | Connection |
|------------|------------|
| D9 | MOSFET Gate |
| A0 | Potentiometer Wiper |
| 5V | Potentiometer VCC |
| GND | Common Ground |
| Motor | Connected through MOSFET to external battery |

---

## Working Principle

The potentiometer is connected to the analog input pin A0 of the Arduino.

1. The Arduino continuously reads the potentiometer value.
2. The ADC converts the analog voltage into a digital value ranging from 0 to 1023.
3. The value is mapped into a PWM range of 0 to 255.
4. The PWM signal is generated on pin D9.
5. The MOSFET switches the motor according to the PWM duty cycle.
6. The average voltage across the motor changes, resulting in speed variation.

### Control Flow

Potentiometer → ADC → PWM → MOSFET → Motor

---

## Concepts Demonstrated

- Pulse Width Modulation (PWM)
- Analog-to-Digital Conversion (ADC)
- MOSFET Switching
- DC Motor Control
- Embedded Programming
- Power Electronics Fundamentals

---

## Applications

- Electric Fans
- Robotics
- Industrial Automation
- Motor Speed Controllers
- Embedded Control Systems

---

## Future Improvements

- LCD Speed Display
- Closed-Loop Speed Control
- Bluetooth Motor Control
- Temperature-Based Speed Control

---

## Results

The motor speed changes smoothly according to the potentiometer position. PWM control allows efficient motor speed regulation while maintaining simple hardware and software implementation.

---

## Author

**Sreehari Vallikattu**

Electrical and Electronics Engineering Student
