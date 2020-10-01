/*
 * Ethan Shenker
 * Systems Pd. 10
 */
#include <stdio.h>

int main()
{
    int sum = 0;
    int i;
    for (i = 1; i < 1000; i++) // for all numbers between 1 and 1,000
    {
        if (i % 3 == 0 || i % 5 == 0) // any number divisible by either 3 or 5
        {
            sum += i;
        }
    }
    printf("total sum = %d\n", sum);
    return 0;
}
