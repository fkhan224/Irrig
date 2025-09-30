#include <Arduino.h>

char moistureHigh = 'L';
char moistureSelected = 'M';
int targetMoistureData[5] = {1, 2, 3, 4, 5};
int actualMoistureData[5] = {4, 5, 6, 7, 8};

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.print("Moisture Highlighted: " + String(moistureHigh));
  Serial.print(", Moisture Selected: " + String(moistureSelected));

  Serial.print(", Target Data: ");
  for (int i = 0; i < 5; i++){
    Serial.print(targetMoistureData[i]); // Print the current element
    if (i < 4){
      Serial.print(", "); // Print a comma and space between elements (except for the last one)
    }
  }

  Serial.print(", Actual Data: ");
  for (int i = 0; i < 5; i++){
    Serial.print(actualMoistureData[i]); // Print the current element
    if (i < 4){
      Serial.print(", "); // Print a comma and space between elements (except for the last one)
    }
  }
  Serial.println();
}
