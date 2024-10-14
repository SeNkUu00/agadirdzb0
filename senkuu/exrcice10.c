#include <stdio.h>
int main()
{
    int x, y, somme;
    printf("donner 1er nomber:");
    scanf("%i", &x);
    printf("donner 2eme nomber:");
    scanf("%i", &y);
    if (x == y)
    {
        somme = (x + y) * 3;
        printf("result: %i", somme);
    }
    else if (x != y)
    {
        somme = x + y;
        printf("result: %i", somme);
    }
    return 0;
}