#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//RS,EN,D4,D5,D6,D7

int count = 0;          //integer for storing character of ID

char input[12];//memory for storing 12 characters of ID

void setup()

{

                // set up the LCD's number of columns and rows:

                lcd.begin(16, 2);

                Serial.begin(9600);//serial communication enabling by 9600 baud rate

    pinMode(0,INPUT);//receive pin set as output

                                lcd.print("CIRCUITDIGEST");//showing name

                                lcd.setCursor(0, 1);//move courser to second line

}

void loop()

{    

                                while(Serial.available() && count < 12)          // Read 12 characters and store them in input array

                                {

                                input[count] = Serial.read();//storing 12 characters one by one

                                                count++;

                                                lcd.print(input[count]);//showing 12 characters on LCD one by one

                                                if (count==12)

                                                {

                                                                lcd.print("             ");

                                                count = 0;// once 12 characters are read get to start and wait for second ID

                                                                lcd.setCursor(0, 1);//move courser to start.

                                                }

                                }

}        
