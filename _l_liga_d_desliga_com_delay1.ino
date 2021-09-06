char recebido;
#define led1 13
#define led2 12
#define led3 11
#define led4 10

void setup() 
{
    Serial.begin(9600);
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
}

void loop() {
  
  if(Serial.available()>0)
  {
    recebido=Serial.read();
    
    if( recebido=='A' || recebido=='a') 
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,HIGH);
    }
    
    if(recebido=='B' || recebido=='b') 
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
    
    }
    
    if(recebido=='C' || recebido=='c') 
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
    
    if(recebido=='D' || recebido=='d') 
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
    if(recebido=='E' || recebido=='e') 
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
  }
}