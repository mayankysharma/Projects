#include <SharpIR.h>

#define IR1 A1 // define signal pin
#define IR2 A2 // define signal pin

#define model1 1080 // for GP2Y0A21YK0F  used 1080
#define model2 1080 // for GP2Y0A21YK0F  used 1080
int counter=0;
int stepPin1 =2; //CLK+
int dirPin1=3;// CW+
SharpIR SharpIR1(IR1, model1);
SharpIR SharpIR2(IR2, model2);

void setup()
{
  pinMode(stepPin1,OUTPUT);
  pinMode(dirPin1,OUTPUT);
  Serial.begin(9600);
 Serial.println("Robojax Sharp IR  ");

 // extra pin for 5V if needed
 pinMode(2,OUTPUT);// define pin 2 as output
 digitalWrite(2, HIGH);// set pin 2 HIGH so it always have 5V
  
  
}
void loop()
{
  delay(500);   

  unsigned long startTime=millis();  // takes the time before the loop on the library begins

  int dis1=SharpIR1.distance();  // this returns the distance for sensor 1
  int dis2=SharpIR2.distance();  // this returns the distance for sensor 2
  // Sharp IR code for Robojax.com 20181201

  Serial.print("Distance (1): ");
  Serial.print(dis1);
  Serial.println("cm");
  
  Serial.print("Distance (2): ");
  Serial.print(dis2);
  Serial.println("cm");
     // Sharp IR code for Robojax.com

for(int i = 0; i <= 3; i++)

{
  int dis1=SharpIR1.distance();  // this returns the distance for sensor 1
  int dis2=SharpIR2.distance();  // this returns the distance for sensor 2

  if(dis1 < 20 && dis2 < 20)
  {
    Serial.println("Counting");
    delay(3000);
  counter=counter+1;
    }
     else 
  {
    Serial.println("Not posible");
    counter=0;
  }
}
if( counter==4)
{
  
    Serial.println("Docking possible");
    counter=0;
 digitalWrite(dirPin1,LOW); 
 
  for (int x=0;x<800;x++)
  {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin1,LOW);
    delayMicroseconds(500);
    
 }

delay(10000);
digitalWrite(dirPin1,HIGH);
 for (int x=0;x<800;x++)
  {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(500);
   }
}
 else 
  {
    Serial.println("Not posible");
  }
}
  
