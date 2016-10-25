
#include "Arduino.h"

unsigned int i;

void setup()
{
  i = 0;
  Serial.begin(9600);
  Serial.println("Hello Travis!");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // blink
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);

  // count
  Serial.println(i);
  i++;
}
