#include <Wire.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //define RS, E, D4, D5, D6, D7  


int c;

void setup() {
  Wire.begin(9);                // join i2c bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
  //LCD START
  lcd.begin(16, 2);
  lcd.print("UNIQUE ID");
}

void loop() {
lcd.setCursor(0,1);
lcd.print("READING");
delay(1000);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany) {

   while(Wire.available()){
   c = Wire.read(); // receive byte as a character
   }
   
    Serial.println(c); // print the character
    lcd.setCursor(1,0);
    lcd.print(c);
    delay(1000);  
  
  //int x = Wire.read();    // receive byte as an integer
  //Serial.println(x);         // print the integer
} 



