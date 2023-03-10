#include <IRremote.hpp>
#include <IRremote.h>

// oin al que esta conectado
const uint16_t irPin = 4;
const int motorPin1 = 5;

// Create una instancia en la libreria
IRrecv irrecv(irPin);

// Crea una variable que recibe 
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(motorPin1, OUTPUT);
  digitalWrite(motorPin1, LOW);
}

void loop() {
  if (irrecv.decode(&results)) {
    digitalWrite(motorPin1, HIGH);
    // If a code is received, print it to the serial monitor
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
}