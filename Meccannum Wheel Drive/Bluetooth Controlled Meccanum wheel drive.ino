
int Ena_m1= 2;
int Enb_m1 = 3;
int in1_m1 = 6;
int in2_m1 = 7;
int in3_m1 = 8;
int in4_m1 = 9;
int Ena_m2= 4;
int Enb_m2 = 5;
int in1_m2 = 10;
int in2_m2 = 11;
int in3_m2 = 12;
int in4_m2 = 13;
String readString;
void setup() {

  //Motor Pins are OUTPUT
  pinMode(Ena_m1, OUTPUT);
  pinMode(Enb_m1, OUTPUT);
  pinMode(in1_m1, OUTPUT);
  pinMode(in2_m1, OUTPUT);
  pinMode(in3_m1, OUTPUT);
  pinMode(in4_m1, OUTPUT);
  pinMode(Ena_m2, OUTPUT);
  pinMode(Enb_m2, OUTPUT);
  pinMode(in1_m2, OUTPUT);
  pinMode(in2_m2, OUTPUT);
  pinMode(in3_m2, OUTPUT);
  pinMode(in4_m2, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  while(Serial.available()){
    delay(50);
    char c=Serial.read();
    readString+=c;
  }
  if(readString.length()>0){
    Serial.println(readString);
    if (readString =="FORWARD"){      // MOVE FORWARD
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, HIGH);
      digitalWrite(in1_m1, HIGH);
      digitalWrite(in2_m1, LOW);
      digitalWrite(in3_m1, HIGH);
      digitalWrite(in4_m1, LOW);

      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in1_m2, HIGH);
      digitalWrite(in2_m2, LOW);
      digitalWrite(in3_m2, HIGH);
      digitalWrite(in4_m2, LOW);
          }
    if (readString =="BACKWARD"){     // MOVE BACKWARD
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, HIGH);
      digitalWrite(in1_m1, LOW);
      digitalWrite(in2_m1, HIGH);
      digitalWrite(in3_m1, LOW);
      digitalWrite(in4_m1, HIGH);

      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in1_m2, LOW);
      digitalWrite(in2_m2, HIGH);
      digitalWrite(in3_m2, LOW);
      digitalWrite(in4_m2, HIGH);
    }
    if (readString =="LEFT"){ 
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, HIGH);
      digitalWrite(in1_m1, LOW);
      digitalWrite(in2_m1, HIGH);  
      digitalWrite(in3_m1, HIGH);
      digitalWrite(in4_m1, LOW);
      
      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in1_m2, HIGH);
      digitalWrite(in2_m2, LOW);
      digitalWrite(in3_m2, LOW);
      digitalWrite(in4_m2, HIGH);
    }
    if (readString =="RIGHT"){
     digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, HIGH);
      digitalWrite(in1_m1, HIGH);
      digitalWrite(in2_m1, LOW);
      digitalWrite(in3_m1, LOW);
      digitalWrite(in4_m1, HIGH);

      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in1_m2, LOW);
      digitalWrite(in2_m2, HIGH);
      digitalWrite(in3_m2, HIGH);
      digitalWrite(in4_m2, LOW);
    }
    if (readString =="FORWARDLEFT"){ 
      digitalWrite(Ena_m1, LOW);
      digitalWrite(Enb_m1, HIGH); 
      digitalWrite(in3_m1, HIGH);
      digitalWrite(in4_m1, LOW);

      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, LOW);
      digitalWrite(in1_m2, HIGH);
      digitalWrite(in2_m2, LOW); 

    }
   if (readString =="FORWARDRIGHT"){
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, LOW); 
      digitalWrite(in1_m1, HIGH);
      digitalWrite(in2_m1, LOW); 

      digitalWrite(Ena_m2, LOW);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in3_m2, HIGH);
      digitalWrite(in4_m2, LOW);  
   }
 if (readString =="BACKWARDLEFT"){  
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, LOW);
      digitalWrite(in1_m1, LOW);
      digitalWrite(in2_m1, HIGH);

      digitalWrite(Ena_m2, LOW);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in3_m2, LOW);
      digitalWrite(in4_m2, HIGH);
 
 
 }
 if (readString =="BACKWARDRIGHT"){  
      digitalWrite(Ena_m1, LOW);
      digitalWrite(in3_m1, LOW);
      digitalWrite(in4_m1, HIGH);

      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, LOW);
      digitalWrite(in1_m2, LOW);
      digitalWrite(in2_m2, HIGH);

  

 }
 if (readString =="ROTATELEFT"){
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, HIGH);
      digitalWrite(in1_m1, LOW);
      digitalWrite(in2_m1, HIGH);
      digitalWrite(in3_m1, HIGH);
      digitalWrite(in4_m1, LOW);
  
      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, HIGH);
      digitalWrite(in1_m2, LOW);
      digitalWrite(in2_m2, HIGH);
      digitalWrite(in2_m2, HIGH);
      digitalWrite(in3_m2, LOW);
 }
 if (readString =="ROTATERIGHT"){
      digitalWrite(Ena_m1, HIGH);
      digitalWrite(Enb_m1, HIGH);   
      digitalWrite(in1_m1, HIGH);
      digitalWrite(in2_m1, LOW);
      digitalWrite(in3_m1, LOW);
      digitalWrite(in4_m1, HIGH);
      digitalWrite(Ena_m2, HIGH);
      digitalWrite(Enb_m2, HIGH); 
      digitalWrite(in1_m2, HIGH);
      digitalWrite(in2_m2, LOW);
      digitalWrite(in3_m2, LOW);
      digitalWrite(in4_m2, HIGH);
      
 }
 if (readString =="STOP"){ 
      digitalWrite(Ena_m1, LOW);
      digitalWrite(Enb_m1, LOW);
      digitalWrite(Ena_m2, LOW);
      digitalWrite(Enb_m2, LOW);
 }
    readString="";
  }
}

  
