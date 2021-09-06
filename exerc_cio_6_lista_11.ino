int botao1 ;
int botao2 ;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  botao1 = digitalRead (2);
  
  if ( botao1 == 1)
  
  {
    digitalWrite(13,HIGH);
    
  }
  
  {
    botao2 = digitalRead (3);
    
    if ( botao2 == 1)
    {
      digitalWrite(13,LOW);
    }
  }
 
}
    
  