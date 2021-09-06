#define led 3
#define pot A0
int leitura,PWM;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  leitura = analogRead (pot);
  //analogWrite(led, 225); //50% de largura de pulso, 255= 100%
  PWM = map(leitura, 0, 1023, 0, 255); //map tem a função de converter
  analogWrite(led, PWM);

}