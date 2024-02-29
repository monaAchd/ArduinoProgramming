// LDR with LED Code:

int LDR_Pin = A0;   // Declaration of LDR_Pin
int Led_Pin = 13;   // Declaration of Led_Pin

void setup() {
    // Initialization content 
    Serial.begin(9600);  // Declaration of the serial library with a communication speed of 9600
}

void loop() {
    // Program content 
    int LDRReading = analogRead(LDR_Pin);  // Read the value from LDR_Pin
    Serial.println(LDRReading);  // Display with a newline
    if (LDRReading < 60) {  // Condition: if the variable LDRReading is less than 60
        digitalWrite(Led_Pin, HIGH);  // Turn on the LED at Led_Pin
    } else {
        digitalWrite(Led_Pin, LOW);  // Turn off the LED at Led_Pin
        delay(2500);  // Wait for 2.5 seconds
    }
}
