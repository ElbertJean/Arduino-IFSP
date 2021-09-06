int cont=0;
void setup()
{
  Serial.begin(9600);
}
void loop ()
{
  Serial.println(cont) ;
  delay (1000) ; 
  cont ++ ;
	if (cont==11)
  {
  	cont=0;
  }
}
