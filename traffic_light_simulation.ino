int Lane1[] = {13,12,11}; // Lane 1 Red, Yellow and Green
int Lane2[] = {10,9,8}; // Lane 3 Red, Yellow and Green
int Lane3[] = {7,6,5}; // Lane 2 Red, Yellow and Green
int Lane4[] = {4,3,2}; // Lane 4 Red, Yellow and Green
int redDelay = 5000;
int yellowDelay = 2000;

void setup() 
{
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
