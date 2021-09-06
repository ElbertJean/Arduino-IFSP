#define potPin A0
#define ledVerm 12
#define ledAzul 13

int valPot = 0;
int valor;

void setup() { 

  Serial.begin ( 9600 );
pinMode(ledVerm,OUTPUT);
pinMode(ledAzul,OUTPUT);

} 

void loop() {    

valPot =  analogRead(potPin); 
valor = map(valPot,0,1023,0,100); 
Serial.println(valor);
  delay(100);
  
//analogWrite(ledPin,valPot ); 
//analogWrite(ledPin1,valPot ); 

  if ( valor < 20 )
  {
    digitalWrite( ledVerm, LOW );
    digitalWrite( ledAzul, LOW );
  }
    
  if ( valor > 20 )
  {
    digitalWrite( ledVerm, HIGH );
    digitalWrite( ledAzul, HIGH );
  }
  
  if ( valor > 90 )
  {
    digitalWrite( ledVerm, LOW );
    digitalWrite( ledAzul, LOW );
  }
  
}