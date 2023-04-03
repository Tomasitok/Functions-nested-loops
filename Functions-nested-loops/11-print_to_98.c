#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n
 * returns nothing
*/
void print_to_98(int n){
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            if (i < 0 && i >= -9) {
                _putchar('-');
                _putchar((-(i % 10)) + '0');
            } else if (i < -9 && i >= -99) {
                _putchar('-');
                _putchar((-(i / 10) % 10) + '0');
                _putchar((-(i % 10)) + '0');
            } else if (i >= 0 && i < 10){
                _putchar((i % 10) + '0');
            }
            else {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            if (i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    } else {
        for (int i = n; i >= 98; i--) {
            if (i >= 100 && i <= 999) {
                _putchar((i / 100) + '0');
                _putchar(((i / 10) % 10) + '0');
                _putchar((i % 10) + '0');
            } else if (i < 100){
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            } else {
                _putchar(i + '0');
            }
            if (i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}
