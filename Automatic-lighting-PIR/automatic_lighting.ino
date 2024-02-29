// Define the PIR sensor output pin
#define IR_output 2

// Define the LED pin
int Led = 3;

void setup() {
  // Set the PIR sensor output pin as INPUT
  pinMode(IR_output, INPUT);
  
  // Set the LED pin as OUTPUT
  pinMode(3, OUTPUT);

  // Initialize Serial communication at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Check if the PIR sensor detects motion (HIGH)
  if (digitalRead(IR_output) == HIGH) {
    // Print a message to Serial indicating detected movement
    Serial.println("Detected movement");

    // Turn on the LED
    digitalWrite(3, HIGH);
  }

  // Check if the PIR sensor does not detect motion (LOW)
  if (digitalRead(IR_output) == LOW) {
    // Print a message to Serial indicating no movement detected
    Serial.println("No movement detected");

    // Turn off the LED
    digitalWrite(3, LOW);
  }

  // Add a delay to avoid rapid serial prints
  delay(200);
}
