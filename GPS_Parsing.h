#include "tm4c123gh6pm.h"
#include "stdint.h"
#include "string.h"
#include <stdlib.h>
#define messageMaxSize   60
#define lat_long_length   15
#define latComma     3
#define longComma     5

void UART5_INIT();
void UART5_write(char data);
char UART5_read();
void get_message(char* mess);
uint8_t is_RMC(char* mess);
uint8_t GPS_Fix(char* mess);
void get_lat_long_char(char* mess,char* latORlongChar,uint8_t commaNum);
double DMM_to_DD(double  DMM);
