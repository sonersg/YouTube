// GETTING INPUT from USER

// scanf: similar to printf "&"
// fgets: for strings

#include <stdio.h>

int main()
{
    // printf("How old are you? :");

    // int age = 0;

    // scanf("%d", &age);

    // printf("Are u really %d yo?", age);

    char name[30];

    printf("What is your name? : ");

    fgets(name, 30, stdin);

    printf("is your name %s ", name);

    return 0;
}
