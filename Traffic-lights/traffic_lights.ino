// Define the pins for the LEDs
int led1 = 3;
int led2 = 4;
int led3 = 5;

void setup() {
  // Set the defined pins as output
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // Turn on the first LED
  digitalWrite(3, HIGH);
  // Wait for 20 seconds
  delay(20000);
  // Turn off the first LED
  digitalWrite(3, LOW);
  // Wait for 20 seconds

  // Repeat the same process for the second LED
  digitalWrite(4, HIGH);
  delay(20000);
  digitalWrite(4, LOW);
  delay(20000);

  // Repeat the same process for the third LED
  digitalWrite(5, HIGH);
  delay(20000);
  digitalWrite(5, LOW);
  delay(20000);
}
