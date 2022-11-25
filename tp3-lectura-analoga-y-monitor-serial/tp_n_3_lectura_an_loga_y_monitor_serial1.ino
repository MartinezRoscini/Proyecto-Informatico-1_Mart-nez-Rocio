int PotV, PotA, PotR, InV, InA, InR;
bool estado;
void setup()
{
  pinMode(9, OUTPUT); //Verde
  pinMode(10, OUTPUT); //Azul
  pinMode(11, OUTPUT); //Rojo
  pinMode(5,  INPUT); //Boton
  pinMode(A0, INPUT); //Pot Verde
  pinMode(A1, INPUT); //Pot azul
  pinMode(A2, INPUT); //PotRojo
  Serial.begin(9600); //Monitor
}

void loop()
{
  
  
  if(!digitalRead(5) == HIGH)
  {
  estado = !estado;
  delay(10000);
  }
  
  if(estado == true)
  {
   Serial.println("Tiene 10 s para configurar el color del led");
   delay(10000);
   PotV = analogRead(A0);
   PotA = analogRead(A1);
   PotR = analogRead(A2);
   InV = map(PotV, 0, 1024, 0, 256);
   InA = map(PotA, 0, 1024, 0, 256);
   InR = map(PotR, 0, 1024, 0, 256);
   analogWrite(9  , InV);
   analogWrite(10 , InA);
   analogWrite(11 , InR);
   Serial.println("El led fue configurado con los colores RGB: ");
   Serial.print("Rojo: ");
   Serial.print(InR);
   Serial.print(" Azul: ");
   Serial.print(InA);
   Serial.print(" Verde: ");
   Serial.println(InV);
   estado = false;
  }
}