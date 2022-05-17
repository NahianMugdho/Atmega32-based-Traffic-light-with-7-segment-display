#include "SevSeg.h"
int red = 10;
int yel = 11;
int gre = 12;
// Create object
SevSeg sevseg;

// Number of digits in display
byte numDigits = 1;
// Display select pins (not used with single display)
byte digitPins[] = {};
// Display segment pins A,B,C,D,E,F,G,DP
byte segmentPins[] = {9, 2, 3, 4, 5, 6, 7, 8};
// Dropping resistors used
bool resistorsOnSegments = true;
// Display type
byte hardwareConfig = COMMON_CATHODE;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(gre, OUTPUT);
  // Start display object
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  // Set brightness
  sevseg.setBrightness(90);

}

void loop() {

  // Count from 0 to 9
  for (int i = 0; i < 10; i++) {
    // Set number for display
    sevseg.setNumber(i);
    Serial.print(i);


    digitalWrite(red, HIGH);



  
  // Wait one second
  delay(1000);
  digitalWrite(red, LOW);

  // Refresh the display
  sevseg.refreshDisplay();
}

for (int i = 0; i < 10; i++)
{
  // Set number for display
  sevseg.setNumber(i);
  Serial.print(i);


  digitalWrite(yel, HIGH);




  // Wait one second
  delay(1000);

  digitalWrite(yel, LOW);
  // Refresh the display
  sevseg.refreshDisplay();
}
for (int i = 0; i < 10; i++)
{
  // Set number for display
  sevseg.setNumber(i);
  Serial.print(i);


  digitalWrite(gre, HIGH);



  // Wait one second
  delay(1000);

  digitalWrite(gre, LOW);
  // Refresh the display
  sevseg.refreshDisplay();
}
}
