# Just Breathe - SIDS Alert System

This project implements a prototype of an embedded system that can determine if a person has stopped breathing for more than 10 seconds, triggering an alert. It is designed to address the need for real-time monitoring of infants to prevent Sudden Infant Death Syndrome (SIDS).

## Overview

Sudden Infant Death Syndrome (SIDS) is a tragic event where a seemingly healthy infant under the age of 1 dies unexpectedly during sleep. The direct cause of SIDS is unknown, making prevention challenging. This project aims to provide a solution by monitoring the breathing of infants and triggering an alert if breathing stops for more than 10 seconds.

## Hardware Requirements

- Microcontroller (STM32F429)
- Thin film pressure sensor
- Wires and breadboard
- Misc components (e.g., belt for sensor placement)

## Installation and Setup

1. Connect the thin film pressure sensor to the microcontroller.
2. Flash the provided code onto the microcontroller using PlatformIO.
3. Ensure the microcontroller is powered and connected to the sensor.

## Usage

1. Place the sensor in a position where it can detect breathing (e.g., near the chest).
2. Power on the system and monitor the LED indicator.
3. If the LED stays on for more than 10 seconds, an alert is triggered, indicating that breathing has stopped.

## Additional Analysis

### Cost Breakdown

- Thin film pressure sensor: $8.22
- Wires and breadboard: $6
- Microcontroller: $29.90
- Misc (belt and electrical components): $5
- **Overall cost: $49.22**

### Use Cases

This sensor can also be fitted into a mask to determine if the person is breathing. The pressure exerted during exhalation will impart a force on the sensor and bend it. This will help in determining whether the person is breathing.

## Acknowledgements

This project was developed as a term project as a part of NYU's Real time embedded systems course - Embedded Challenge Fall 2022. Thanks to all the team members for the implementation and analysis.

Thanks for exploring this repository! Feel free to contact for more information.
