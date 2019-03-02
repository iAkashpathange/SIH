int Lane1[] = {13,12,11}; // Lane 1 Red, Yellow and Green
int Lane2[] = {10,9,8}; // Lane 3 Red, Yellow and Green
int Lane3[] = {7,6,5}; // Lane 2 Red, Yellow and Green
int Lane4[] = {4,3,2}; // Lane 4 Red, Yellow and Green
int redDelay = 5000;
int yellowDelay = 2000;

int count = 0;                                          // count = 0
char input[12] = {0};                                         // character array of size 12
boolean flag = 0; // flag =0
int i = 0;

char a[] = "27002233D2E4";
char b[] = "2700222E96BD";
char c[] = "270022321225";
char d[] = "2700222FC4EE";
char e[] = "270022517D29";

void setup()
{
  Serial.begin(9600); 
  
  for (int x = 0; x < 3; x++)  // Declaring all the LED's as output
  {
    pinMode(Lane1[x], OUTPUT); 
    pinMode(Lane2[x], OUTPUT);
    pinMode(Lane3[x], OUTPUT);
    pinMode(Lane4[x], OUTPUT);
  }
    
  
}

void loop()
{
  if (Serial.available())
  {
    count = 0;
    while (Serial.available() && count < 12)         // Read 12 characters and store them in input array
    {
      input[count] = Serial.read();
      count++;
      delay(5);
    }
    Serial.print(input);                             // Print RFID tag number

    if ((input[0] ^ input[2] ^ input[4] ^ input[6] ^ input[8] == input[10]) &&
        (input[1] ^ input[3] ^ input[5] ^ input[7] ^ input[9] == input[11]))
      Serial.println("No Error");
    else
      Serial.println("Error");
      
     
  
  
    if(input[11] == a[11]){
    Serial.println("Ambulance Detected!");
    Serial.println("Running Priority Traffic Optimisation ISR");
  }
  if(input[11] == b[11]){
    Serial.println("Vehicle detected!");
    Serial.println("Running Traffic Optimisation ISR");
    i++;
   
   }
   if(input[11] == c[11]){
    Serial.println("Vehicle Detected!");
    Serial.println("Running Traffic Optimisation ISR");
    i++;
    
    }
   if(input[11] == d[11]){
    Serial.println("Vehicle Detected!");
    Serial.println("Running Traffic Optimisation ISR");
    i++;
    
    }
   if(input[11] == e[11]){
    Serial.println("Vehicle Detected!");
    Serial.println("Running Traffic Optimisation ISR");
    i++; 
    } 

    Serial.println("");
    Serial.println("The total number of detected vehicles");
    Serial.print(i);
  }
  
  
   digitalWrite(Lane1[2], 1);
  digitalWrite(Lane3[0], 1);
  digitalWrite(Lane4[0], 1);
  digitalWrite(Lane2[0], 1);
  delay(redDelay);
  digitalWrite(Lane1[2], 0);
  digitalWrite(Lane3[0], 0);
  digitalWrite(Lane1[1], 1);
  delay(yellowDelay);
  digitalWrite(Lane1[1], 0);
  digitalWrite(Lane3[1], 0);
  digitalWrite(Lane1[0], 1);
  digitalWrite(Lane3[2], 1);
  delay(redDelay);
  digitalWrite(Lane3[2], 0);
  digitalWrite(Lane4[0], 0);
  digitalWrite(Lane3[1], 1);
  delay(yellowDelay);
  digitalWrite(Lane3[1], 0);
  digitalWrite(Lane4[1], 0);
  digitalWrite(Lane3[0], 1);
  digitalWrite(Lane4[2], 1);
  delay(redDelay);
  digitalWrite(Lane4[2], 0);
  digitalWrite(Lane2[0], 0);
  digitalWrite(Lane4[1], 1);
  delay(yellowDelay);
  digitalWrite(Lane4[1], 0);
  digitalWrite(Lane2[1], 0);
  digitalWrite(Lane4[0], 1);
  digitalWrite(Lane2[2], 1);
  delay(redDelay);
  digitalWrite(Lane1[0], 0);
  digitalWrite(Lane2[2], 0);
  digitalWrite(Lane2[1], 1);
  delay(yellowDelay);
  digitalWrite(Lane2[1], 0);
  digitalWrite(Lane1[1], 0);
 }
      
  }
