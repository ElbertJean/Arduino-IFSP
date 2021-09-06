char recebido;

#define verde 2
#define azul 3
#define vermelho 4 

void setup() 
{
    Serial.begin(9600);
    pinMode(vermelho,OUTPUT);
  	pinMode(azul,OUTPUT);
  	pinMode(verde,OUTPUT);
    
}

void loop() 
{

  if(Serial.available()>0) // verifica se ha dado na serial 
  {
    recebido=Serial.read(); // le o dado da serial
    if( recebido=='R') 
    {
      digitalWrite(	vermelho,HIGH);
      delay(1000);
      digitalWrite(azul,LOW);
      digitalWrite(verde,LOW);
      
    }
    if(recebido=='B') 
    {
      digitalWrite(azul,HIGH);
      delay(1000);
      digitalWrite(vermelho,LOW);
      digitalWrite(verde,LOW);
      }
    if(recebido=='G') 
    {
      digitalWrite(verde,HIGH);
      delay(1000);
      digitalWrite(vermelho,LOW);
      digitalWrite(azul,LOW);
      }
  }
}