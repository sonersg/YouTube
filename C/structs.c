

// STRUCTS:
// Collection of related members or variables.
// Very similar to classes in other languages
// but without methods

#include <stdio.h>
#include <string.h>

struct User
{
    int id;
    char name[22];
};

int main()
{
    struct User u1;
    struct User u2;

    u1.id = 1;
    strcpy(u1.name, "sksmdla");

    u2.id = 2;
    // strcpy(u2.name, "soenr");

    printf("%s\n", u1.name);
    printf("%d\n", u1.id);
}
