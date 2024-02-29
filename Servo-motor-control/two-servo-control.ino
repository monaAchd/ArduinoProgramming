#include <Servo.h>  // Include the servo motor library

int pinServo1 = 10;  // Servo 1 PWM pin
int pinServo2 = 11;  // Servo 2 PWM pin

Servo hServo1;  // Create a Servo object to control servo motor 1
Servo hServo2;  // Create a Servo object to control servo motor 2

int Position = 45;  // Declare the initial position

int minPos = 7;  // Minimum position
int maxPos = 160;  // Maximum position

float output1 = (maxPos - minPos) / 2;  // Initialize the output position
float output2 = (maxPos - minPos) / 2;  // Initialize the output position

void setup() {
  Serial.begin(9600);  // Initialize the serial communication with a baud rate of 9600
  hServo1.attach(pinServo1);
  hServo2.attach(pinServo2);

  // Set Servos to Center for Alignment Purpose
  Serial.println("Moving Servos to start Position");  // Display and newline
  hServo1.write(output1);  // Set servo 1 to the value of output1
  hServo2.write(output2);  // Set servo 2 to the value of output2
  delay(2000);  // Wait for 2 seconds
  Serial.println("Ready");  // Display "Ready" with newline
}

void loop() {
  hServo1.write(0);  // Set servo 1 to 0 degrees
  delay(1000);  // Wait for 1 second
  hServo2.write(90);  // Set servo 2 to 90 degrees
  delay(1000);  // Wait for 1 second
  hServo1.write(180);  // Set servo 1 to 180 degrees
  delay(1000);  // Wait for 1 second
  hServo2.write(180);  // Set servo 2 to 180 degrees
  delay(1000);  // Wait for 1 second
}
