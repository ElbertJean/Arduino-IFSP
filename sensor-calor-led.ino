#define pot A0
#define led 13

int leitura;

void setup ()
{
  Serial.begin ( 9600 );
  pinMode ( led, OUTPUT );
  pinMode ( pot, INPUT );
}

void loop ()
{
  leitura = analogRead ( pot );
  Serial.println ( leitura );
  delay ( 1000 );
  
  if ( leitura >= 550 )
  {
    digitalWrite( led , HIGH );
    delay ( 2000 );
    digitalWrite ( led , LOW );
  }
}
  