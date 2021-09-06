#define potPin A0
#define ledPin 6
#define ledPin1 7

int valPot = 0; 

void setup() { 

pinMode(ledPin,OUTPUT);
pinMode(ledPin1,OUTPUT);

} 

void loop() {    

valPot =  analogRead(potPin); 
valPot = map(valPot,0,1023,0,255); 
analogWrite(ledPin,valPot ); 
analogWrite(ledPin1,valPot ); 


}