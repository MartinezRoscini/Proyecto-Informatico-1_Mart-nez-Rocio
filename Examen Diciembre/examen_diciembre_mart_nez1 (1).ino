#define ledR 2
#define ledG 4
#define ledB 3
#define buzzer 5

#define sensor A5
void setup ()
{
  	pinMode(ledR, OUTPUT);
    pinMode(ledG, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(buzzer, OUTPUT);
      
      pinmode( sensor, INPUT );
  
  Serial.begin(9600);
}

void loop(){
  int ldr = analogRed(Sensor);
  
  luz = map ( ldr , 0 , 1024 , 0 , 100);
  
  if (luz <= 40){
    digitalWrite (ledG , HIGH);
  }else if ( ( luz > 40) and (luz <= 60) ){
    analogWrite(ledR , 150);
    analogWrite(ledB , 150);
  }else if (luz >60){
    digitalWrite (ledR , HIGH);
    
    digitalWrite(buzzer , HIGH);
    digitalWrite(buzzer , LOW);
    
  }
  
  digitalWrite(ledR , LOW);
  digitalWrite(ledB , LOW);
  digitalWrite(ledG , LOW);
  digitalWrite(buzzer , LOW);
  
}
    