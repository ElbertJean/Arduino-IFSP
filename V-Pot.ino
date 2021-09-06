#define  pot A0

int entrada;
float tensao;

void setup ()
{
  Serial.begin ( 9600 );
  pinMode ( pot, INPUT );
}

void loop ()
{
  entrada = analogRead ( A0 );
  tensao = (entrada/1023.0)*5;
  
  Serial.println ( tensao );
  delay ( 1000 );
}