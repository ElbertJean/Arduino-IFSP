#define pot A0
#define buzzer 2

int leitura;
int frequencia;

void setup ()
{
  pinMode( buzzer, OUTPUT );
  pinMode( pot, INPUT );
}

void loop ()
{
  leitura = analogRead( pot );
  frequencia = map ( leitura, 0, 1023, 150, 15000);
  tone ( buzzer, frequencia );
  delay ( 1000 );
}
