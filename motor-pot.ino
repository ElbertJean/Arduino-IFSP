#define potX A0
#define botao 2
#define motorP 2
#define motorN 3

int eiX;
int anguloX;

void setup()
{
  pinMode(potX, INPUT);
  pinMode(motorP, OUTPUT);
  pinMode(motorN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  eiX = analogRead (potX);
  
  anguloX = map(eiX, 0, 1023, -255, 255);
  
  if ( anguloX <= 0)
  {
    digitalWrite(motorP, LOW);
    digitalWrite(motorN, HIGH);
  }
  
  else
  {
    digitalWrite(motorN, LOW);
    digitalWrite(motorP, HIGH);
  }
  
 
  Serial.print (" EIXO X ");
  Serial.print (anguloX);
  
  Serial.println();
  
}