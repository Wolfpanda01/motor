const int mot1 = 3;
const int mot2 = 5;
const int mot3 = 6;
const int mot4 = 9;
const int it = 10;
const int re = 11;
const int mota0 = A0;

void setup()
{
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  pinMode(mot3, OUTPUT);
  pinMode(mot4, OUTPUT);
  pinMode(mota0, INPUT);
pinMode(it, OUTPUT);
pinMode(re, OUTPUT);
}
void top()
{
 digitalWrite(mot1,HIGH);
 digitalWrite(mot2,LOW);
 
 
}
void topback()
{
 digitalWrite(mot1,LOW);
 digitalWrite(mot2,HIGH);

}
void bottom()
{
 digitalWrite(mot3,HIGH);
 digitalWrite(mot4,LOW);

}
void bottomback()
{
 digitalWrite(mot3,LOW);
 digitalWrite(mot4,HIGH);
 
}
void speedgo()
{ analogWrite(it,255);
 analogWrite(re,255);
}
void stop()
{digitalWrite(mot1,LOW);
 digitalWrite(mot2,LOW);
 digitalWrite(mot3,LOW);
 digitalWrite(mot4,LOW);
}

void loop()
{  
   top();
 for(int i=0; i< 256; i++){
 speedgo();
   delay(70); 
 }
  for (int i= 255; i<= 0; i--);
  {delay(70);
   stop(); 
   
  }
  
  topback();
for(int i=0; i< 256; i++){
 speedgo();
   delay(70); 
 }
  for (int i= 255; i<= 0; i--);
  {delay(70);
   stop(); 
   
  }
  
   delay(1000);
	bottom();
  for(int i=0; i< 256; i++){
 speedgo();
   delay(70); 
 }
  for (int i= 255; i<= 0; i--);
  {delay(70);
   stop(); 
   
  }
  
  delay(1000);
  bottomback();
   for(int i=0; i< 256; i++){
 speedgo();
   delay(70); 
 }
  for (int i= 255; i<= 0; i--);
  {delay(70);
   stop(); 
   
  }
  
      
      
    
  }
  


  
