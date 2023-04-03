#include <unistd.h>

/**
 * _putchar - write a character
 * @c
 * return an integer
*/

int _putchar(char c) {
    return(write(1, &c, 1));
}