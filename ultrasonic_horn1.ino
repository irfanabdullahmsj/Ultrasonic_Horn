// C++ code
//
int time1,time2,time3;
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  pinMode(4,OUTPUT);
  digitalWrite(4,1);
  delayMicroseconds(2);
  digitalWrite(4,0);
  pinMode(4,INPUT);
  time1=pulseIn(4,HIGH);
  Serial.println(time1);
  
  pinMode(2,OUTPUT);
  digitalWrite(2,1);
  delayMicroseconds(2);
  digitalWrite(2,0);
  pinMode(2,INPUT);
  time2=pulseIn(2,HIGH);
  Serial.println(time2);
  
  pinMode(3,OUTPUT);
  digitalWrite(3,1);
  delayMicroseconds(2);
  digitalWrite(3,0);
  pinMode(3,INPUT);
  time3=pulseIn(3,HIGH);
  Serial.println(time3);
  if (time1<6000)
  {
    digitalWrite(6,1);
  }
  if (time2<6000){
    digitalWrite(10,1);
  }
  if (time3<6000){
    digitalWrite(9,1);
  }
  if (time1>=6000){
    digitalWrite(6,0);
  }
  if (time2>=6000){
    digitalWrite(10,0);
  }
  if (time3>=6000){
    digitalWrite(9,0);
  }
  
}