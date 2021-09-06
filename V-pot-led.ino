#define pot A0
#define led 13
int leitura;
float tensao;

void setup()
{
  pinMode (pot, INPUT);
  Serial.begin(9600);
  pinMode (led, OUTPUT);
}

void loop()
{
  leitura = analogRead (pot);
  tensao = (leitura/1023.0)*5.0;
  
  if ( tensao <=3)
  {
    digitalWrite(led, LOW);
  }
  
  else 
  {
    digitalWrite(led, HIGH);
  }
  
}