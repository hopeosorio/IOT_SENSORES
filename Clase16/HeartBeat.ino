//Cesar Alejandro Ordoñez Osorio
int heartBeatPin = 4;
int ledPin = 2;
int heartBeatValue = 0;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(heartBeatPin, INPUT);
  serial.begin(9600);
}

void lopp(){
  heartBeatValue = analogRead(hearBeatPin);
  Serial.println(heartBeatValue);
  if (heartBeatValue > 700) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}