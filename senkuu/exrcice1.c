#include <stdio.h>

int main()
{
    char name[20];
    char prenom[20];
    int age;
    char email[50];

    printf("name..");
    scanf("%s", name);

    printf("prenom..");
    scanf("%s", prenom);

    printf("age..");
    scanf("%i", &age);

    printf("email..");
    scanf("%s", email);

    printf("\nyour information is\n");
    printf("\nname > %s\n", name);
    printf("\nprenom > %s\n", prenom);
    printf("\nage > %i\n", age);
    printf("\nemail > %s\n", email);

    return 0;
}