void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);

  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  Serial.println("LED ON");
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  Serial.println("LED OFF");
}
