#define vermelho1 13
#define amarelo1 12
#define verde1 11
#define vermelho2 10
#define amarelo2 9
#define verde2 8

void setup()
{
  pinMode(vermelho1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);
}

void loop()
{
  digitalWrite(vermelho1, HIGH); //sinal 1
  digitalWrite(amarelo1, LOW); //sinal 1
  digitalWrite(verde1, LOW); //sinal 1
  
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, 
  delay (1000);
  
  digitalWrite(vermelho1, LOW); //sinal 1
  digitalWrite(verde1, HIGH); //sinal 1
  delay(3000);
  
  digitalWrite(verde1, LOW); //sinal 1
  digitalWrite(amarelo1, HIGH); //sinal 1
  delay (1000);
  
  digitalWrite(amarelo1, LOW); //sinal 1
  digitalWrite(vermelho1, HIGH); //sinal 1
  delay (1000);
  
  digitalWrite(vermelho1, HIGH); //sinal 1
  
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, HIGH);
  delay (3000);
  
  digitalWrite(vermelho1, HIGH); //sinal 1
  
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, HIGH);
  delay (1000);
 
}