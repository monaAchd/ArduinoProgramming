int sensorPin = A1;     // Selecting the pin for soil moisture sensor measurement
int sensorValue = 0;    // Initializing the sensor value
int led = 12;           // Initializing the LED pin
int soil_alert = 300;   // Threshold value for triggering an alert

void setup() {
  Serial.begin(9600);    // Initialize serial communication at 9600 bps
  pinMode(led, OUTPUT);   // Set the LED pin as an output
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Read the soil moisture sensor value directly
  delay(1000);                         // Wait for 1 second

  if (sensorValue < soil_alert) {
    digitalWrite(led, HIGH);  // Turn on the LED
    delay(1000);               // Wait for 1 second
    digitalWrite(led, LOW);   // Turn off the LED
  }
}
