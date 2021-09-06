int entrada;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  entrada = digitalRead (2);
  
  if ( entrada==1)
  
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    
  }
  else
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
  }
 
}