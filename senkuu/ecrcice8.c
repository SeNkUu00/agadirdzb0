#include <stdio.h>
int main()
{

    int menu;

    printf("menu :\n");

    printf("for pizza press 1\n");
    printf("for tacos press 2\n");
    printf("for panini press 3\n");
    printf("your choice:");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("pizza cost: 40 DH");
        break;
    case 2:
        printf("tacos cost: 37 DH");
        break;
    case 3:
        printf("panini cost: 25 DH");
        break;

    default:
        printf(" not found");
        break;
    }

    return 0;
}