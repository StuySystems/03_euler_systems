/*
 * Ethan Shenker
 * Systems Pd. 10
 */
#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int square_sum = 0;
    int sum_squares = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += i;
        sum_squares += i * i; // sum of the squares
    }
    square_sum = sum * sum; // square of the sum
    printf("the difference between the sum of the squares and the square of the sum is %d\n", square_sum - sum_squares);
    return 0;
}