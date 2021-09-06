int botao1 ;
int botao2 ;
int botao3 ; 

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop()
{
  botao1 = digitalRead (2);
  botao2 = digitalRead (3);
  botao3 = digitalRead (4);
  
  if (( botao2 == 1 && botao3 == 1) || botao1 == 1)
  
  {
    digitalWrite(13,HIGH);
    
  }
  
  else
  {
    digitalWrite(13,LOW);
  }
  
}
    
