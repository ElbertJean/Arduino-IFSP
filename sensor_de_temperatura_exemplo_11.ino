
#define pot A0

int leitura,temp;


void setup ()
{
 
 Serial.begin(9600); 
  pinMode(pot,INPUT);
}
void loop ()
  
{
  leitura=analogRead(pot);
  //angulo=(leitura/1023.0)*180.0;
  temp=map(leitura,0,1023,-50,450);
    
  Serial.println(temp);
  
 
}