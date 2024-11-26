

// RECURSIVE FUNCTION:
// A function invokes itself

#include <stdio.h>

void multiply_subtract(int counter)
{
    printf("%d: i am inside a recursive function\n", counter);

    counter--;
    if (counter > 0)
        multiply_subtract(counter);
}

int main()
{
    multiply_subtract(10);

    return 0;
}
