# Pregnancy Health Monitoring System Using IOT

Pioneered the development of a cutting-edge application for continuous health surveillance of expectant mothers. Integrated IoT protocols to capture and analyze vital health parameters, enabling real-time data aggregation and timely notifications for enhanced maternal care and management.

![Circuit-Diagram](https://github.com/ashreethaudhay/IOT_Based_Pregnancy_Health_Monitoring_System/assets/155312402/21d977bd-9ed3-4fdc-9496-3e23e57aa63d)

## Overview
This project implements a health monitoring system for expectant mothers using IoT and sensor technology. Key features:
- Monitors vital health parameters in real-time
  - Heart rate
  - Blood pressure
  - Body temperature
  - Weight
- Aggregates data and enables data analysis
- Provides notifications/alerts if parameters fall outside expected ranges
- Helps provide better maternal healthcare

## Components
- Arduino Uno
- DHT11 temperature and humidity sensor
- Piezo sensor to measure heart rate
- Force sensitive resistor to measure weight
- Pulse rate sensor to measure blood pressure
- Buzzer for alerts
- LED display

## Usage
The system measures the following health parameters periodically:
- Heart rate
- Body temperature
- Weight
- Blood pressure

The measured values are displayed on the serial monitor. If any values exceed configured thresholds, an alert is triggered via the buzzer and LED display.

The system can be expanded by:
- Storing data to analyze trends
- Sending notifications/alerts to doctors
- Adding a web interface
