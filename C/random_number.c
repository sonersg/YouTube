// RANDOM NUMBERS in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int min = 10;
    int max = 15;

    // int random_number = (rand() % 5) + 1;

    int random_number = (rand() % (max - min + 1)) + min;

    printf("%d", random_number);

    // printf("%d", time(0));

    return 0;
}
