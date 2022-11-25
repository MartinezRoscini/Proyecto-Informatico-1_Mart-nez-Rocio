void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  for (int R = 0 ; R <= 6 ; R++ )
  {
    
  	for(int G = 0 ;  G <= 255  ; G++)
  	{
      
      for (int B = 0 ; B <= 255 ; B++ )
      {
    	analogWrite(3 , B);
        analogWrite(5 , G);
        analogWrite(6 , R);

      }     
  	}
  }  	
}