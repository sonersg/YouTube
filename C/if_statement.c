

// IF STATEMENT

// conditions, loops, functions

#include <stdio.h>

int main()
{
    int grade = 55;

    if (grade > 90)
    {
        printf("You got A!");
    }
    else if (grade > 80)
    {
        printf("You got B!");
    }
    else if (grade > 70)
    {
        printf("You got C!");
    }
    else if (grade > 60)
    {
        printf("You got D!");
    }
    else
    {
        printf("You failed!");
    }

    // if (12 < 13)
    // {
    //     printf("i am inside the condition block");
    // }

    return 0;
}