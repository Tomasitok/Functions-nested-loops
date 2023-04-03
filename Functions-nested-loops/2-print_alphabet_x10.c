#include "main.h"

/**
 * print_putchar - prints the alphabet 10 times
 * return nothing
*/

void print_alphabet_x10(void){
    int j;
    for (j = 0; j < 10; j++) {
        char i = 'a';
        while ( i <= 'z' ){
            _putchar(i);
            i++;
        }
        _putchar('\n');
    }
}