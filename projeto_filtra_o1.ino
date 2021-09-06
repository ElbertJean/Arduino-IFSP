#define botao 4 // Botão On Off
#define bombaP 2 // Motor polo positivo
#define bombaN 3 // Motor polo negativo
#define sensorRB 11 // Sensor do reservatório baixo
#define sensorRA 10 // Sensor do reservatório alto
#define sensorFB 9 // Sensor de filtração baixo 
#define sensorFA 8 // Sensor de filtração alto

int entrada;

void setup() 
{
  Serial.begin (9600); // Inicializa o serial
  pinMode (botao, INPUT);
  pinMode (bombaP, OUTPUT);
  pinMode (bombaN, OUTPUT);
  pinMode (sensorRB, OUTPUT);
  pinMode (sensorRA, OUTPUT);
  pinMode (sensorFB, OUTPUT);
  pinMode (sensorFA, OUTPUT);
}

void loop() 
{
  entrada = digitalRead (botao);
  
  if ( entrada == 1  || sensorRA == 1 || sensor FA == 1) // If do botao 1 - Motor 1
  
  {
    digitalWrite (bombaP, HIGH); // bomba liga
  }
  
 
  
  
  
  
  
  
  
}