// ARRAYS

// In C programming,
// an array is a collection of variables of the same data type.

// Arrays are used to store multiple values in a single variable.
// This allows us to manage large datasets efficiently.

// ********************************************

// One-dimensional arrays
// Two-dimensional arrays
// Multi-dimensional arrays:
// Extension of 2-D arrays, rarely used in practice

#include <stdio.h>

int main()
{

    // int numbers[] = {21, 22};

    // numbers[0] = 444;

    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // printf("%d", size);

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", numbers[i]);
    // }

    // 2-D ARRAYS

    int two_d_array[3][3] = {
        {1, 2, 3},
        {3, 4, 5},
        {6, 7, 8},
    };

    printf("%d", two_d_array[1][1]);

    return 0;
}
