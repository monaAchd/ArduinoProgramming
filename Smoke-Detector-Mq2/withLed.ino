const int mqxPin = A0;
int mqxValue = 0; // The analog output of the MQx sensor is connected to the A0 analog pin of the Arduino
int soilAlert = 290;
int buzz = 11;

void setup() {
  Serial.begin(9600); // Initializes the serial port at 9600 bps
  pinMode(mqxPin, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  Serial.println(analogRead(mqxPin));

  if (mqxValue < soilAlert)
    digitalWrite(11, HIGH);

  delay(1000); // Prints a measurement every second
  digitalWrite(11, LOW);
}

