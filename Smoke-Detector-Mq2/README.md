# Smoke-Detector-Mq2

## Project Overview

### Problem Statement
There are several accidents triggered by the presence of smoke, gases, and other substances. This escalating issue highlights the critical need for effective detection and monitoring solutions to detect potential risks and ensure public safety.

### Solution:
The MQ-2 is a sensor designed to detect gas or smoke at concentrations ranging from 300 ppm to 10,000 ppm. After calibration, the MQ-2 can identify various gases such as LPG (Liquefied Petroleum Gas), i-butane, propane, methane, alcohol, hydrogen, and smoke. It is designed for indoor use at ambient temperatures.

- Power Requirements: The MQ2 should be powered at 5V to allow the physico-chemical sensor to reach its operating temperature.
- Output: The module provides two outputs:
A digital output (TTL) labeled DOUT.
An analog output labeled AOUT.
- Sensitivity Adjustment: The module features a sensitivity adjustment through a potentiometer.

## Hardware Requirements
- Arduino Uno: The microcontroller that forms the core of the project.
- Smoke Detector MQ2: A gas and smoke sensor capable of detecting various gases.
- LED: Light-emitting diode for visual output (optional, choose either LED or Buzzer).
- Buzzer: An audio output device for alerting (optional, choose either LED or Buzzer).

## Software Requirements
Before getting started, ensure you have the following software installed:

- **Arduino IDE:** The official integrated development environment for Arduino programming.
  - [Download Arduino IDE](https://www.arduino.cc/en/software)

## Implementation:
To implement the solution using Arduino, you have the flexibility to choose between two output methods: LED or Buzzer. Below, you'll find instructions for each option.

#### Clone the Repository

1. Open your terminal or command prompt.
2. Navigate to the directory where you want to clone the repository.
3. Run the following command to clone the repository to your local machine:

   ```bash
   git clone https://github.com/your-username/your-repository.git


#### LED Output
1. Open the Arduino IDE.
2. Copy and paste the code from withLed.ino in the Smoke-detector-Mq2 folder into the Arduino IDE.
3. Connect the Arduino board to your computer and upload the code to the board.
4. Connect the LED to the specified pin on the Arduino board.

#### Buzzer Output
1. Open the Arduino IDE.
2. Copy and paste the code from withBuzzer.ino in the Smoke-detector-Mq2 folder into the Arduino IDE.
3. Connect the Arduino board to your computer and upload the code to the board.
4. Connect the buzzer to the specified pin on the Arduino board.

Choose the method that best suits your requirements, and follow the respective instructions to set up the hardware and upload the code to the Arduino board.
