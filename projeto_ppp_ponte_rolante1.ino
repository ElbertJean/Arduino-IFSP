#define botao1 13
#define botao2 12
#define botao3 11
#define botao4 10
#define botao5 9
#define botao6 8
#define motorP1 6
#define motorN1 7
#define motorP2 4
#define motorN2 5
#define motorP3 2
#define motorN3 3


int entrada1; 
int entrada2;
int entrada3; 
int entrada4;
int entrada5; 
int entrada6;

void setup()
{
  Serial.begin (9600);
  pinMode ( botao1, OUTPUT );
  pinMode ( botao2, OUTPUT );
  pinMode ( botao3, OUTPUT );
  pinMode ( botao4, OUTPUT );
  pinMode ( botao5, OUTPUT );
  pinMode ( botao6, OUTPUT );
  pinMode ( motorN1, OUTPUT );
  pinMode ( motorP1, OUTPUT );
  pinMode ( motorN2, OUTPUT );
  pinMode ( motorP2, OUTPUT );
  pinMode ( motorN3, OUTPUT );
  pinMode ( motorP3, OUTPUT );

}

void loop ()
{
  entrada1 = digitalRead ( botao1 );
  entrada2 = digitalRead ( botao2 );
  entrada3 = digitalRead ( botao3 );
  entrada4 = digitalRead ( botao4 );
  entrada5 = digitalRead ( botao5 );
  entrada6 = digitalRead ( botao6 );
  
  if ( entrada1 ==  1 ) // BOTÃO 1 - MOTOR LIGA HORÁRIO
  {
    digitalWrite ( motorP1 , HIGH);
    digitalWrite ( motorN1 , LOW);
  }
  
  if ( entrada2 == 1 ) // BOTÃO 2 - MOTOR LIGA ANTI-HORÁRIO
  {
    digitalWrite ( motorN1 , HIGH);
    digitalWrite ( motorP1 , LOW);
  }
  
  if ( entrada1 == 1 && entrada2 == 1 ) // TRAVAMENTO MOTOR 1
  {
    digitalWrite ( motorN1 , LOW);
    digitalWrite ( motorP1 , LOW);
  }
  
  if ( entrada1 == 0 && entrada2 == 0 ) // TRAVAMENTO MOTOR 1
  {
    digitalWrite ( motorN1 , LOW );
    digitalWrite ( motorP1 , LOW );
  }
  
  if ( entrada3 ==  1 ) // BOTÃO 3 - MOTOR LIGA HORÁRIO
  {
    digitalWrite ( motorP2 , HIGH);
    digitalWrite ( motorN2 , LOW);
  }
  
  if ( entrada4 == 1 ) // BOTÃO 4 - MOTOR LIGA ANTI-HORÁRIO
  {
    digitalWrite ( motorN2 , HIGH);
    digitalWrite ( motorP2 , LOW);
  }
  
  if ( entrada3 == 1 && entrada4 == 1 ) // TRAVAMENTO
  {
    digitalWrite ( motorN2 , LOW);
    digitalWrite ( motorP2 , LOW);
  }
  
  if ( entrada3 == 0 && entrada4 == 0 ) // TRAVAMENTO
  {
    digitalWrite ( motorN2 , LOW);
    digitalWrite ( motorP2 , LOW);
  }
  
  if ( entrada5 ==  1 ) // BOTÃO 5 - MOTOR LIGA HORÁRIO
  {
    digitalWrite ( motorP3 , HIGH);
    digitalWrite ( motorN3 , LOW);
  }
  
  if ( entrada6 == 1 ) // BOTÃO 6 - MOTOR LIGA ANTI-HORÁRIO
  {
    digitalWrite ( motorN3 , HIGH);
    digitalWrite ( motorP3 , LOW);
  }
  
  if ( entrada5 == 1 && entrada6 == 1 ) // TRAVAMENTO
  {
    digitalWrite ( motorN3 , LOW);
    digitalWrite ( motorP3 , LOW);
  }
  
  if ( entrada5 == 0 && entrada6 == 0 ) // TRAVAMENTO
  {
    digitalWrite ( motorN3 , LOW);
    digitalWrite ( motorP3 , LOW);
  }
}
  
  
  
  
  
  
  