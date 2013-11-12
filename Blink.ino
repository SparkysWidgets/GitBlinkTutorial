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
int ledPin = 11; //If you are using an arduino for this example change pin to 13, for leophi to pin 11

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
 // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 
}
