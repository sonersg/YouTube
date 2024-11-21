

// conditions, LOOPS, functions

// LOOPS:
// We use loops to run some block of codes
// repeatedly, as many times as we want

// for, WHILE, do while 

#include <stdio.h>

int main(void)
{

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d. Step: Hello you!\n", i);
    // }

    int i = 1;

    while (1)
    {
        printf("Step %d, Hello you!\n", i);
        i++;
        if (i > 6)
            break;
    }
}
