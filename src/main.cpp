#include <Arduino.h>

int count = 0;

void setup()
{
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);

  // configuro uart
  Serial1.begin(9600);
  while (!Serial)
  {
    ; // wait for serial port to connect. Needed for native USB
  }
}

void loop()
{
  count++;
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(100);

  // ENVIO MENSAJE
  Serial1.println(count);
}
