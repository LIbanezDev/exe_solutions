void setup()
{
  pinMode(3, OUTPUT);
   pinMode(2, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop()
{
  if(digitalRead (12) == HIGH){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
  
  if(digitalRead(11) == HIGH){
     digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  
  }
  
  }