#include <Servo.h>
#define pot A0

Servo S1;

int leitura;
int angulo;

void setup()
{
  S1.attach( 3 );
  pinMode(pot,INPUT);
  
}

void loop()
{
  leitura = analogRead( pot );
  angulo = map( leitura,0,1023,0,180 );
  S1.write( angulo );
  delay( 500 );
}
