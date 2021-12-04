#include <Arduino.h>

int pin = 7;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // 1st code to control the brightness of the led
  // for (int i = 0; i <= 255; i += 5) // would go from min to man brightness
  // {
  //   analogWrite(pin, i);
  //   delay(5);
  // }
  // for (int j = 255; j >= 0; j -= 5)
  // {
  //   analogWrite(pin, j);
  //   delay(5);
  // }

  //2nd code for using the photoresistor and controling the led
  // Serial.println(analogRead(A0));
  // analogWrite(pin,analogRead(A0));

  //3rd code to measure the distance between the object and the sensor
  //4th code to check the frequency through ir reciever...
  Serial.println(analogRead(A0));
  analogWrite(pin,analogRead(A0));
}