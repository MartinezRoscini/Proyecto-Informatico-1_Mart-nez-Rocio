#include <LiquidCrystal.h>

//Led y sensores
#define TMP  A5
#define LuzA A4
#define LED_V 2
#define LED_A 3
#define LED_R 4

//Boton y LCD
#define Boton 5
#define RS  8
#define E   9
#define DB7 13
#define DB6 11
#define DB5 12
#define DB4 10


LiquidCrystal Pantallita( RS , E , DB4 , DB5 , DB6 , DB7 );
bool estado;
void setup()
{
  pinMode(TMP  , INPUT );
  pinMode(LuzA , INPUT );
  pinMode(LED_V, OUTPUT);
  pinMode(LED_A, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(Boton, INPUT);
  
  Serial.begin(9600);
  Pantallita.begin( 16 , 2 );
}

void loop()
{
  
  float TMPA = analogRead(TMP);
  int temp_final = (5.0 / 1024 * TMPA ) * 100 - 50 ; 
  int LuzAA = analogRead(LuzA);    
  float LuzAF = map(LuzAA, 1022, 711, 0, 10);
  
  
  
  if(LuzAF == 0)
  {
      if (temp_final < 18 )
    {
     digitalWrite(LED_A , HIGH);
     digitalWrite(LED_R , LOW);
     digitalWrite(LED_V , LOW);
    }
    else if (temp_final >= 18 , temp_final < 90)
    {
     digitalWrite(LED_A , LOW);
     digitalWrite(LED_R , LOW);
     digitalWrite(LED_V , HIGH);
    }
    else if (temp_final >= 90)
    {
     digitalWrite(LED_A , LOW);
     digitalWrite(LED_R , HIGH);
     digitalWrite(LED_V , LOW);
    }
  }
  else{
     digitalWrite(LED_A , LOW);
     digitalWrite(LED_R , LOW);
     digitalWrite(LED_V , LOW);
   }
  
 if ( !digitalRead ( Boton ) == HIGH )
 {
   estado = !estado ;
   Pantallita.clear();
 }
 if (estado == true)
 {
  Pantallita.setCursor(0,0);
  Pantallita.print("Temperatura");
  Pantallita.setCursor(4,1);
  Pantallita.print(temp_final);
  Pantallita.print("c");
 }
  else{
  Pantallita.setCursor(0,0);
  Pantallita.print("Luz Ambiental");
  Pantallita.setCursor(5,1);
  Pantallita.print(LuzAF);
  }
  delay(300);
  Pantallita.clear();
}