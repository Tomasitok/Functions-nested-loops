#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n
 * returns -n if n is less than zero, returns n otherwise
*/

int print_last_digit(int n){
    int p;
    if (n < 0){
        n = -n;
    }
    p = n % 10;
    
    _putchar (p + '0');
    return p;
}