int pot, Vel;
void setup()
{
pinMode( 3 , OUTPUT);
pinMode( 4 , OUTPUT);
pinMode( 5 , OUTPUT);
pinMode( 6 , OUTPUT);
pinMode( 7 , OUTPUT);
pinMode( 8, INPUT);
pinMode( A1, INPUT);
}
void loop()
{
pot = analogRead(A1);
Vel = map(pot, 0, 1024, 200, 1200);
if( digitalRead( 8 ) == HIGH )
{
analogWrite( 3 , 255);
delay(Vel);
analogWrite( 3 , 0);
delay(Vel);
}
if( digitalRead( 8 ) == HIGH )
{
pot = analogRead(A1);
Vel = map(pot, 0, 1024, 200, 1200);
digitalWrite( 4 , HIGH);
digitalWrite( 5 , HIGH );
analogWrite( 3 ,0);
delay(Vel);
pot = analogRead(A1);
Vel = map(pot, 0, 1024, 200, 1200);
digitalWrite( 4 , LOW);
digitalWrite( 5 , LOW);
delay( Vel );
}
if( digitalRead( 8 ) == HIGH )
{
pot = analogRead(A1);
Vel = map(pot, 0, 1024, 200, 1200);
analogWrite( 6 , 40);
analogWrite( 7 , 40);
delay(Vel);
pot = analogRead(A1);
Vel = map(pot, 0, 1024, 200, 1200);
analogWrite( 6 , 0);
analogWrite( 7 , 0);
}

}