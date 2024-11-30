

// STRUCTS:
// Collection of related members or variables.
// Very similar to classes in other languages
// but without methods

#include <stdio.h>

struct User
{
    int id;
    char name[44];
    int age;
};

int main()
{
    struct User u1 = {1, "soesks", 66};
    struct User u2 = {2, "smldsaloesks", 67};

    u1.age = 77;
    // u1.name = "kdsalkds";

    printf("%s\n", u1.name);
    printf("%i\n", u2.age);
}
