/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
  We are using this as a very simple git/github tutorial.
  In this first version we want to change the pin number to one that will work with an LED
  specifically one with PWM driving it.
 */
 
/
// FIXME: We are using a LeoPhi board with has an RGB hook to pins 9,10,11 (all PWM) 
// if following along (and using an arduino) Pin 13 has an LED connected on most Arduino boards. 
int led = 2; //If you are using an arduino for this example change pin to 13, for leophi to pin 11

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
