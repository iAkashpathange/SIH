#include <Wire.h>
char c;
void setup() {
  Wire.begin(9);                // join i2c bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
}

void loop() {
  delay(3000);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany) {

   while(Wire.available()){
   c = Wire.read(); // receive byte as a character
   }
    Serial.println(c); // print the character
    
      
  
  //int x = Wire.read();    // receive byte as an integer
  //Serial.println(x);         // print the integer
} 
