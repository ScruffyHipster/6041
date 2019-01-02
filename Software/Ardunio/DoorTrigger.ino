
int doorPin = 3;
int doorState;

void setup() {
  Serial.begin(9600);
  pinMode(doorPin, INPUT_PULLUP);
  Serial.print(F("Door trigger"));

  doorState = false; //Door closed
}

void loop() {
  if(doorState == false) {
    if(digitalRead(doorPin) == HIGH) { //door open
      //Serial.write("a"); 
      Serial.println(F("open"));
      doorState = true;
    }
  }
  if(doorState == true) {
    if(digitalRead(doorPin) == LOW) { //door closed
      //Serial.write("b");
      Serial.println(F("closed"));
      doorState = false;
    }
  }
}
