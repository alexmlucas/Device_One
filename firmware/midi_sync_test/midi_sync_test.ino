/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
int led = 10;

byte counter;
byte CLOCK = 248;
byte START = 250;
byte CONTINUE = 251;
byte STOP = 252;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  Serial.begin(31250);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  usbMIDI.setHandleRealTimeSystem(RealTimeSystem);
}

// the loop routine runs over and over again forever:
void loop() {
  usbMIDI.read();
  delay(10);
}

void RealTimeSystem(byte realtimebyte){
  if(realtimebyte == CLOCK){
    counter++;
    if(counter == 24){
      counter = 0;
      digitalWrite(led, HIGH);
    }
    if(counter == 12){
      digitalWrite(led, LOW);
    }
  }

  if(realtimebyte == START || realtimebyte == CONTINUE){
    counter = 0;
    digitalWrite(led, HIGH);
  }

  if(realtimebyte == STOP){
    digitalWrite(led, LOW);
  }
}
