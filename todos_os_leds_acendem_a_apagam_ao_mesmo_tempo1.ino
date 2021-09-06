//               0 1 2 3 4 5 6 7
int pinos [8] = {2,3,4,5,6,7,8,9};
int i;

void setup()
{
   for( i=0; i<=7; i++ )
   {
     pinMode( pinos[i],OUTPUT);
   }
}

void loop()
{
  for ( i=0; i<=7; i++ )
  {
    digitalWrite(pinos[i],HIGH);
  }
  delay(500);
  
  
  
  for ( i=0; i<=7; i++ )
  {
    digitalWrite(pinos[i],LOW);
  }
  delay(500);
  
  
  
}
 
    
