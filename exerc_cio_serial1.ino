int botao1 ;
int botao2 ;
int botao3 ; 

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  botao1 = digitalRead (2);
  
  if ( botao1 == 1 ){
    digitalWrite(13,HIGH);
    delay (250);
    digitalWrite(13, LOW);
    delay (250);
  } else
  {
    digitalWrite(13,LOW);
  }
}
    
  