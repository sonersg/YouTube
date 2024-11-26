

// FUNCTIONS with PARAMETERS:
// You can think of the params as the inputs for functions.

// f(x) = 2x - 3

#include <stdio.h>

// return_type function_name(parameter_list) {
//     // Function body
//     return value;  // Optional, depends on return_type
// }

void multiply_subtract(int number)
{
    int x = number;

    x = x * 2;

    x = x - 3;

    printf("%d\n", x);
}

int main()
{
    multiply_subtract(3);

    return 0;
}
