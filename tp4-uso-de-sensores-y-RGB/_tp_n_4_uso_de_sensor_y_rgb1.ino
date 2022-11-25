#define TMP  A5
#define LuzA A4
#define LED_V 2
#define LED_A 3
#define LED_R 4

void setup()
{
  pinMode(TMP  , INPUT );
  pinMode(LuzA , INPUT );
  pinMode(LED_V, OUTPUT);
  pinMode(LED_A, OUTPUT);
  pinMode(LED_R, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  float TMPA = analogRead(TMP);
  int temp_final = (5.0 / 1024 * TMPA ) * 100 - 50 ; 
  int LuzAA = analogRead(LuzA);    
  float LuzAF = map(LuzAA, 1022, 711, 0, 10);
  
  
  Serial.print("El nivel de luz actual es: ");
  Serial.println(LuzAF);
  Serial.print("y la temperatura actual: ");
  Serial.print(temp_final);
  Serial.println(" Grados Centigrados");
  if(LuzAF == 0)
  {
      if (temp_final < 18 ){
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
  delay(500);
}