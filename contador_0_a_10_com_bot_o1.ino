char Vrecebido;
#define ledVermelho 13

void setup() {
    Serial.begin(9600);
    pinMode(ledVermelho,OUTPUT);
}

void loop() {
  
  if(Serial.available()>0)
  {
    Vrecebido=Serial.read();
    
    if( Vrecebido=='L') 
    {
      digitalWrite(ledVermelho,HIGH);
    }
    
    if(Vrecebido=='P') 
    {
      digitalWrite(ledVermelho,HIGH);
      delay(2000);
      digitalWrite(ledVermelho,LOW);
    
    }
    
    if(Vrecebido=='D') 
    {
      digitalWrite(ledVermelho,LOW);
    }
  }
}
