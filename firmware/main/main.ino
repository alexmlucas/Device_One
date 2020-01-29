#include <Bounce.h>

const int DEBOUNCE_TIME = 10;
const int LED_PIN = 9;
const int LED_ON_TIME = 50;

int last_led_on = 0;
bool led_on = false;


Bounce button0 = Bounce(4, DEBOUNCE_TIME);
Bounce button1 = Bounce(3, DEBOUNCE_TIME);
Bounce button2 = Bounce(1, DEBOUNCE_TIME);
Bounce button3 = Bounce(0, DEBOUNCE_TIME);
Bounce button4 = Bounce(23, DEBOUNCE_TIME);
Bounce button5 = Bounce(22, DEBOUNCE_TIME);
Bounce button6 = Bounce(19, DEBOUNCE_TIME);
Bounce button7 = Bounce(18, DEBOUNCE_TIME);

void setup() 
{
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(1, INPUT);
  pinMode(0, INPUT);
  pinMode(23, INPUT);
  pinMode(22, INPUT);
  pinMode(19, INPUT);
  pinMode(18, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() 
{
  if(led_on == true && millis() - last_led_on > LED_ON_TIME){
    digitalWrite(LED_PIN, LOW);
    led_on = false;
  }

  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();

  // On button press
  if (button0.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 1);
  }

  if (button1.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 2);
  }

  if (button2.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 3);
  }

  if (button3.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 4);
  }

  if (button4.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 5);
  }

  if (button5.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 6);
  }

  if (button6.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 7);
  }

  if (button7.risingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOn(60, 99, 8);
  }

  // On button release
  if (button0.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 1);
  }

  if (button1.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 2);
  }
  
  if (button2.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 3);
  }

  if (button3.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 4);
  }

  if (button4.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 5);
  }

  if (button5.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 6);
  }

  if (button6.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 7);
  }
  
  if (button7.fallingEdge())
  {
    digitalWrite(LED_PIN, HIGH);
    led_on = true;
    last_led_on = millis();
    usbMIDI.sendNoteOff(60, 0, 8);
  }
}
