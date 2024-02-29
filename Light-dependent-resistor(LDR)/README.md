# LDR with LED Project

This Arduino project involves using a Light Dependent Resistor (LDR) to control an LED based on ambient light conditions.

## Components Used

- **LDR (Light Dependent Resistor):** A sensor that changes its resistance based on the surrounding light.
- **LED:** Light Emitting Diode, used as an output indicator.
- **Arduino Board:** Arduino Uno or any compatible board.

## How it Works

The program reads the analog value from the LDR and prints it to the Serial Monitor. If the LDR reading is below a threshold (60 in this case), the LED is turned on; otherwise, it's turned off after a delay of 2.5 seconds.

## Setup Instructions

1. Connect the components based on the provided circuit diagram.
2. Upload the provided Arduino code to your Arduino board using the Arduino IDE.
3. Open the Serial Monitor to view the LDR readings and observe the LED behavior.

## Code Explanation

- **LDR_Pin (A0):** Analog pin connected to the LDR.
- **Led_Pin (13):** Digital pin connected to the LED.
- The `setup()` function initializes serial communication at a baud rate of 9600.
- The `loop()` function reads the LDR value, prints it, and controls the LED based on the LDR reading.

## Notes

Adjust the threshold value (60) and delay duration (2500 milliseconds) in the code based on your specific requirements.



