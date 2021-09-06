#include <Servo.h>

#define Motor 2

Servo S1;

void setup ()
{
  S1.attach ( Motor );
}

void loop ()
{
  S1.write ( 0 );
  delay (1000);
  
  S1.write ( 90 );
  delay (1000);
  
}