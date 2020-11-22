#include <Arduino.h>
#include "dbMeter.h"

#define BUF_SIZE (1024)
char *data = (char *)malloc(BUF_SIZE);

void hexPrintDebug(char *buf, size_t len)
{
  for (int i = 0; i < len; i++)
  {
    if (buf[i] >> 4 == 0)
    {
      Serial.print('0');
    }
    Serial.print(buf[i], HEX);
    Serial.print(' ');
  }
  Serial.println();
}

void setup()
{
  Serial.begin(115200);
  dbMeterInit(17, 16, 115200, 2);
  delay(1000);
}

void loop()
{
  float dB = dbMeterGetDb();
  Serial.println(dB, 1);
  delay(600);
}