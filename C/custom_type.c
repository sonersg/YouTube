
// CUSTOM DATA TYPE
// typedef, struct

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[22];
    int age;
} Person;

int main()
{
    // Person p1 = {"soenr", 22};
    // Person p2 = {"fdnskf", 99};

    // p1.age = 33;
    // // p1.name = "dkslsa";

    // printf("%s is not %d years old.\n", p1.name, p1.age);
    // printf("%s is not %d years old.\n", p2.name, p2.age);

    // ARRAY of CUSTOM DATA TYPE
    Person people[] = {{"soner", 22}, {"nfdksn", 33}};

    people[1].age = 44;
    strcpy(people[1].name, "aaaaaa");

    printf("%s\n", people[1].name);
    printf("%d\n", people[0].age);

    return 0;
}
