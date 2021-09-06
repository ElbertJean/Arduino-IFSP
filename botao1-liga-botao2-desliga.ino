#define ledV 13
#define ledA 12
#define botaoOn 11
#define botaoOff 10

int entrada1;
int entrada2;
int liga;

void setup()
{
	pinMode(ledV, OUTPUT);
	pinMode(ledA, OUTPUT);
	pinMode(botaoOn, INPUT);
	pinMode(botaoOff, INPUT);
}

void loop()
{
	entrada1 = digitalRead ( botaoOn );
    entrada2 = digitalRead ( botaoOff );

if( entrada1 == 1 )
  {
	liga = 1;
  }
  
if( entrada2 == 1 )
  {
	liga = 0;
  }

if( liga == 1)
  {
	digitalWrite( ledV, HIGH );
	digitalWrite( ledA, LOW );
	delay( 200 );
  
	digitalWrite( ledV, LOW );
	digitalWrite( ledA, HIGH );
	delay( 200 );
  } 

if( liga == 0 )
  {
	digitalWrite( ledV, LOW);
	digitalWrite( ledA, LOW);
  }  
  
}
