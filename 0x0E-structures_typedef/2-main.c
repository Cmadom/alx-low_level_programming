#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Voices";
    my_dog.age = 5;
    my_dog.owner = "Clifford";
    print_dog(&my_dog);
    return (0);
}
