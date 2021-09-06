#define pot A0
int leitura;
float tensao;

void setup()
{
  pinMode (pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  leitura = analogRead (pot);
  tensao = (leitura/1023.0)*5.0;
  Serial.println(tensao);
  delay (500);
}