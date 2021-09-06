#define vermelho1 13
#define amarelo1 12
#define verde1 11

void setup()
{
  pinMode(vermelho1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(verde1, OUTPUT);
}

void loop()
{
  digitalWrite(vermelho1, HIGH); //sinal 1
  digitalWrite(amarelo1, LOW); //sinal 1
  digitalWrite(verde1, LOW); //sinal 1
  delay (500);
  
  digitalWrite(vermelho1, LOW); //sinal 1
  digitalWrite(amarelo1, HIGH); //sinal 1
  delay(500);
  
  digitalWrite(amarelo1, LOW); //sinal 1
  digitalWrite(verde1, HIGH); //sinal 1
  delay (500);
 
}