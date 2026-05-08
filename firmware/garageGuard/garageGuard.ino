#include <Ultrasonic.h>

#define TRIG_PIN 12
#define ECHO_PIN 11 
#define BUZZERPIN 8
#define MAXDIST 100 //incm
#define NOTE_C6 1047

Ultrasonic ultrasonic(TRIG_PIN,ECHO_PIN);

long distance;

void setup() {
   //pinMode(BUZZERPIN, OUTPUT);
   
}

void loop() {
   distance=ultrasonic.read();
   if (distance > MAXDIST)
   {
      //digitalWrite(BUZZERPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      tone(BUZZERPIN, NOTE_C6, 500);
      delay(500);                      // wait for a second
   }
   delay(1000);
}
