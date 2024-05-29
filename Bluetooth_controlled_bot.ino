#include <SoftwareSerial.h>
SoftwareSerial bluetooth(4,3);
char bt;
void setup() {
  // put your setup code here, to run once:
bluetooth.begin(9600);   //begins communication between HC-05 & Arduino
Serial.begin(9600);      //begins serial communication with baud rate 9600
pinMode(10,OUTPUT);      //sets Pins 10, 11, 12, 13 as OUTPUT Pins
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void moveRobot(String motion) 
{
  if(motion == "Forward")      // Right wheel - Fwd(10 - Positive, 11 - Negative); Left Wheel - Fwd(12 - Positive, 13 - Negative)
  {  
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Forward");
  }
  
   if(motion == "Backward")    // RW - Bck(10 - Neg, 11 - Pos); LW - Bck(12 - Neg, 13 - Pos)
   {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Backward");
  } 
  
  if(motion == "Left")     // RW - Fwd(10 - Pos, 11 - Neg); LW - Bck(12 - Neg, 13 - Pos)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Left");
  }
     
  if(motion == "Right")   // RW - Bck(10 - Neg, 11 - Pos); LW - Fwd(12 - Pos, 13 - Neg)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Right");
  }
     
  if(motion == "Stop")    // RW - Stop(10 - Neg, 11 - Neg); LW - Stop(12 - Neg, 13 - Neg)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    Serial.println("Stop");
  }

  } 

void loop(){
  if(bluetooth.available())  {    //checks if bluetooth is available or not
    bt = bluetooth.read();        //Reads data from HC-05 and stores in "bt"
    Serial.println("The character Sent from bluetooth app is: " + String(bt));
  }
   if (bt == '1'){               //Data received when the Forward button on the app is pressed
    moveRobot("Forward");
  }
  if(bt == '2'){                //Data received when the Backward button on the app is pressed
    moveRobot("Backward");
  }
  if(bt == '3'){                //Data received when the Right button on the app is pressed
    moveRobot("Right");
  }
   if(bt == '4'){               //Data received when the Left button on the app is pressed
    moveRobot("Left");
  }
  if(bt == '0'){               //Data received when the Stop/No button on the app is pressed
    moveRobot("Stop");
  }
}
