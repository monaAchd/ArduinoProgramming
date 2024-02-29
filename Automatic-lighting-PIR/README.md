# Automatic Lighting with PIR (Passive Infrared) sensor

## Problem Statement

The project addresses the need to illuminate the environment automatically and efficiently in specific scenarios, including:


- **Emergency Situations**
- **Handicap Assistance**
- **Time Efficiency**
- **Elderly Individuals Living Alone**

## Solution

The proposed solution utilizes a Pyroelectric or PIR (Passive Infrared) sensor, which operates as follows:

- If motion is detected, the sensor's output signal goes HIGH (1).
- If no motion is detected, the sensor's output signal goes LOW (0).

Additionally, the PIR sensor is capable of detecting variations in infrared waves, generating an electric current. The sensor is divided into two parts connected to detect variations when one half captures more than the other. This setup allows for detecting positive variations during movement.

## Materials

To implement the solution, the following materials are required:

- **PIR Sensor**
- **Arduino Uno**
- **LED**

## Software Requirements

Before getting started, ensure you have the following software installed:

- **Arduino IDE:** The official integrated development environment for Arduino programming.
  - [Download Arduino IDE](https://www.arduino.cc/en/software)

## Implementation

To implement the solution using Arduino and the PIR sensor:

1. Clone the Repository:

   ```bash
   git clone https://github.com/your-username/your-repository.git

2. Open the Arduino IDE.

3. Copy and paste the code from automatic_lighting.ino in the Automatic-lighting-PIR folder into the Arduino IDE.

4. Connect the PIR sensor and LED to the specified pins on the Arduino board as shown in the circuit diagram.

5. Upload the code to the Arduino board.
