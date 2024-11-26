

// conditions, loops, FUNCTIONS

// USER DEFINED FUNCTIONS:
// Functions are blocks of code designed
// to perform specific tasks. They make programs modular,
// reusable, and easier to understand.

// f(x) = 2x - 3

#include <stdio.h>

// return_type function_name(parameter_list) {
//     // Function body
//     return value;  // Optional, depends on return_type
// }

void multiply_subtract()
{
    int x = 5;

    x = x * 2; // 10

    x = x - 3; // 7

    printf("%d\n", x);
}

int main()
{
    multiply_subtract();
    multiply_subtract();

    return 0;
}
