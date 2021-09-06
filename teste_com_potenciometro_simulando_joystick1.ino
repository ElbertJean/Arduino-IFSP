#define potX A0
#define potY A1
#define botao 2

int bot;
int eiX, eiY;
int anguloX, anguloY;

void setup()
{
  pinMode(potX, INPUT);
  pinMode(potY, INPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop()
{
  eiX = analogRead (potX);
  eiY = analogRead (potY);
  bot = digitalRead (botao);
  
  anguloX = map(eiX, 0, 1023, -180, 180);
  anguloY = map(eiY, 0, 1023, -180, 180);
 
  if ( bot == 1)
  {
    Serial.println(" BOTÃO PRESSIONADO ");
  }
  
  else
  {
    Serial.println(" BOTÃO NÃO PRESSIONADO ");
  }
 
  Serial.print (" EIXO X ");
  Serial.print (anguloX);
  
  Serial.print (" EIXO Y ");
  Serial.print (anguloY);
  Serial.println();
  
}