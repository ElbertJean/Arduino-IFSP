 #include <Servo.h>
 #define sensor A0
 #define vermelho 4
 #define verde 3
 
 Servo s1;

 int leitura;
 int angulo;
 
 void setup()
 {
   Serial.begin ( 9600 );
   s1.attach(2);
   pinMode(sensor,INPUT);
   pinMode(vermelho,OUTPUT);
   pinMode(verde,OUTPUT);
 }
 
void loop()
{
   leitura=analogRead( sensor );
   Serial.println ( leitura );
   delay ( 100 );

   if (leitura < 500)
   {
     digitalWrite(vermelho,LOW);
     digitalWrite(verde,HIGH);
	 s1.write(angulo);
     angulo = 0;
   }

   if ( leitura > 500 )
   {
     digitalWrite(vermelho,HIGH);
     digitalWrite(verde,LOW);
     s1.write(angulo);
     angulo = 90;
   }
 }