#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>

#define enable            5
#define registerselection 6

void SEND_COMMAND(unsigned char command);
void SEND_CHARACTER(unsigned char character);
void SEND_STRING(char *string_of_characters);