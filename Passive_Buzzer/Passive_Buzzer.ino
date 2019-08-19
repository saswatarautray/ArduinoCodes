
const int buzzer = 8; 

void setup(){ 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 8 as an output
}

void loop(){
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(3000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(3000);        // ...for 1sec
}
