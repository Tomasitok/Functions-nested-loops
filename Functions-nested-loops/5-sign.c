#include "main.h"

/**
 * print_sing - prints the sign of a number
 * @n
 * returns 1 if n is greater than zero, returns 0 if n is zero, returns -1 if n is less than zero
*/

int print_sign(int n){
    if ( n > 0 ){
        _putchar (43);
        return 1;
    }
    else if ( n == 0){
        _putchar (48);
        return 0;
    }
    else {
        _putchar (45);
        return -1;
    }
}