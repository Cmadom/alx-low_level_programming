#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(16, 88, 524);
    printf("%d\n", sum);
    sum = sum_them_all(6, 68, 714, 942, -524);
    printf("%d\n", sum);
    return (0);
}
