#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Voices";
    my_dog.age = 5;
    my_dog.owner = "Clifford";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
