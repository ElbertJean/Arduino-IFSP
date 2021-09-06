#include <Servo.h>
Servo MrBean;

void setup()
{
  MrBean.attach(2);
  Serial.begin(9600);
}

void loop()
{
 Serial.println("0 GRAUS");
 MrBean.write(0);
 delay(2000);
 Serial.println("90 GRAUS");
 MrBean.write(90);
 delay(2000);
 Serial.println("180 GRAUS");
 MrBean.write(180);
 delay(2000);
 
}