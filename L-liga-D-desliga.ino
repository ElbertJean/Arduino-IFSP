#define led 2

char recebido;

void setup ()
{
  Serial.begin (9600);
  pinMode ( led, OUTPUT );
}

void loop ()
{
  if ( Serial.available ()>0 )
  {
    recebido = Serial.read ();
    
    if ( recebido == 'l' )
    {
      digitalWrite ( led, HIGH );
    }
    
    if ( recebido == 'd' )
    {
      digitalWrite ( led, LOW );
    }
  }
}
        