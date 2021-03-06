#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 ** main - program prints the minimum number of coins
 ** to make change for an ammmount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 ** return: (0)
 **/

int main(int argc, char *argv[])
{
    int cents[5] = {25, 10, 5, 2, 1};
    int i = 0;
    int result;
    int count = 0;

    if (argc <= 1)
    {
        printf("ERROR\n");
        return (1);
    }
    result = atoi(argv[1]);

    if (atoi(argv[1]) < 0)
    {
        printf("0\n");
        return (0);
    }
    while (i < 5)
    {
        while (result >= cents[i])
        {
            result = result - cents[i];
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return(0);
}
