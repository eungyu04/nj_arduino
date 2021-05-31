byte b1,b2,b3,b4; //변수설정

void setup() 
{  
  for(byte i=2;i<=5;i++) 
    pinMode(i,INPUT);
  for(byte i=6;i<=13;i++)
    pinMode(i,OUTPUT);
}

void loop() 
{
  b1=digitalRead(2);
  b2=digitalRead(3);
  b3=digitalRead(4);
  b4=digitalRead(5);
  
  if(b1==HIGH){
    for(byte i=6;i<=14;i++) //LED 하나씩 순차적으로 켜졌다 꺼짐
    {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i-1, LOW);
      delay(100);
    }
  }
  
  if(b2==HIGH){
    for(byte i=1;i<=5;i++) //5번 반복
    {
      for(byte t=6;t<=14;t++) //LED전체킴
        digitalWrite(t,HIGH);
      delay(200);
        
      for(byte t=6;t<=14;t++) //LED전체끔
        digitalWrite(t,LOW);
      delay(200);  
    }
  }
  
  if(b3==HIGH){
    for(byte i=1;i<=5;i++)
    {
      for(byte t=6;t<=9;t++)
        digitalWrite(t,HIGH);
      delay(200);

      for(byte t=6;t<=9;t++)
        digitalWrite(t,LOW);
      delay(200);

      for(byte t=10;t<=14;t++)
        digitalWrite(t,HIGH);
      delay(200);  
      
      for(byte t=10;t<=14;t++)
        digitalWrite(t,LOW);
      delay(200);  
    }
  }
}
