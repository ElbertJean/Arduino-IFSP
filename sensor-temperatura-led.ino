#define sensor A5
#define azul 4
#define amarelo 3
#define vermelho 2

int leitura;
int temp;

void setup()
{
  Serial.begin( 9600 );
  pinMode ( A5, INPUT );
  pinMode( azul, OUTPUT);
  pinMode( amarelo, OUTPUT);
  pinMode( vermelho, OUTPUT);
}

void loop ()
{
  leitura = analogRead( sensor );
  temp = map(leitura, 0, 1023, -50, 450);
  Serial.println (temp);
  delay(200);
  
  if ( temp < 20 )
  {
    digitalWrite ( azul , HIGH );
    digitalWrite ( amarelo , LOW );
    digitalWrite ( vermelho , LOW );
  }
  
  if ( temp  >= 20 && temp <=40)
  {
    digitalWrite ( azul , LOW );
    digitalWrite ( amarelo , HIGH );
    digitalWrite ( vermelho , LOW );
  }
  
  if ( temp  >40)
  {
    digitalWrite ( azul , LOW );
    digitalWrite ( amarelo , LOW );
    digitalWrite ( vermelho , HIGH );
  }
  
}