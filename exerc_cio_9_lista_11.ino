int entrada1;
int entrada2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  entrada1 = digitalRead (2);
  
  if ( entrada1 == 1)
  
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    delay(500);
    
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    delay(500);
  }
  
  entrada2 = digitalRead (3);
  
  if ( entrada2 == 1)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
 
}