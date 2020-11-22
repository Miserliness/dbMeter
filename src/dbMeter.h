#include <Arduino.h>
#ifndef _DBMETER_H_
#define _DBMETER_H_
#ifdef __cplusplus
extern "C" {
#endif

extern void dbMeterInit(int txPin, int rxPin, int baudrate, int uart_number);
extern float dbMeterGetDb();
extern unsigned char* checkSum(unsigned char *pBuf, unsigned char numByte);

#ifdef __cplusplus
}
#endif
#endif