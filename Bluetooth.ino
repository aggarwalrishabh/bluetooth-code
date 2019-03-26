#include<SoftwareSerial.h>

//Create object named bt of the class SoftwareSerial 
SoftwareSerial bt(0,1); 		// (Rx,Tx) pins defined  

void setup() {
  bt.begin(9600);
// Define baud rate for software serial communication 
  Serial.begin(9600); 		
// Define baud rate for serial communication 

}

void loop() {
  //char input[10];
  String input;
    if (bt.available())
      { 
      input=bt.readString();
    
    Serial.println(input);			 
//Print character received on to the serial monitor
    }
}
