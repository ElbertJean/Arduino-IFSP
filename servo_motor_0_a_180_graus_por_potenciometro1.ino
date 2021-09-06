#define pot A0
#include <Servo.h>
Servo MrBean;
int leitura, angulo;

void setup()
{
  MrBean.attach(2);
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop()
{
 leitura = analogRead(pot);
 // angulo = (leitura / 1023.0) *180.0;
 angulo = map( leitura, 0, 1023, 0, 180); 
 MrBean.write(angulo);
 Serial.println(angulo);
  
}