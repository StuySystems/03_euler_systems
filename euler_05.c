/*
 * Ethan Shenker
 * Systems Pd. 10
 */
#include <stdio.h>

int is_div(int num);

int main()
{
    char done = 0; // boolean variable
    long num_checked = 1;
    while (!done)
    {
        if (is_div(num_checked))
        {
            done = 1; // end iteration
        }
        else
        {
            num_checked += 1; // continue
        }
    }
    printf("the smallest # that's evenly divisible by all nums 1-20 is %ld\n", num_checked);
    return 0;
}

int is_div(int num)
{
    int i;
    for (i = 1; i <= 20; i++) // for each number 1 - 20
    {
        if (num % i != 0)
        {
            return 0; // return false if one doesn't work
        }
    }
    return 1; // true otherwise
}