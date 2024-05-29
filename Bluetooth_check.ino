#include <SoftwareSerial.h>

//create serial object with the values of Tx and Rx pin
SoftwareSerial bluetooth(12,13);
void setup() 
{
  // put your setup code here, to run once:
  bluetooth.begin(9600);   //begin the communication between Bluetooth module and Arduino with baud rate 9600
  Serial.begin(9600);      //begin the serial communication with baud rate 9600
  Serial.println("Pair with Bluetooth");
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (bluetooth.available()) {   //checks if the Bluetooth is available or not
    char bt = bluetooth.read();  //reads the data from bluetooth and stores in "bt"
    Serial.println("The char that is "+ String(bt));
  } 
}
