int entrada;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  entrada = digitalRead (2);
  
  if ( entrada==0)
  
  {
    digitalWrite(13,LOW);
  }
  else
  {
    digitalWrite(13,HIGH);
  }
 
}