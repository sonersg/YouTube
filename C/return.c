

// THE RETURN KEYWORD:
// - Sends a value back from a function to the place
// where the function was called.
// - It immediately ends the execution of a function.

#include <stdio.h>

// return_type function_name(parameter_list) {
//     // Function body
//     return value;  // Optional, depends on return_type
// }

// f(x) = 2x - 3
int multiply_subtract(int number)
{
    int x = number;

    x = x * 2;

    x = x - 3;

    return x;

    // printf("dlşadlsşalşds");
}

int main()
{
    int answer = multiply_subtract(3);

    printf("%d", answer);

    return 0;
}
