#include "main.h"

/**
 * times_table - print the multiplication tables from 0 to 9
 * returns nothing
*/

void times_table(void)
{
    int i, j, res;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            res = i * j;
            if (j == 0)
            {
                _putchar(res + '0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                if (res < 10)
                {
                    _putchar(' ');
                }
                else
                {
                    _putchar((res / 10) + '0');
                }
                _putchar((res % 10) + '0');
            }
        }
        _putchar('\n');
    }
}
