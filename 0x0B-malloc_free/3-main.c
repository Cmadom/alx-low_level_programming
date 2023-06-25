#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void print_grid(int **grid, int width, int height)
{
    int x;
    int y;

    x = 0;
    while (x < height)
    {
        y = 0;
        while (y < width)
        {
            printf("%d ", grid[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    int **grid;

    grid = alloc_grid(8, 8);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 8, 8);
    printf("\n");
    grid[3][2] = 77;
    grid[4][3] = 888;
    print_grid(grid, 8, 8);
    return (0);
}
