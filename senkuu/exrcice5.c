#include <stdio.h>
int main()
{

    int C;

    printf("la température en Celsius..");
    scanf("%i", &C);

    if (C < 0)
    {
        printf("solide");
    }
    else if (0 <= C  && C < 100)
    {
        printf("Liquide");
    }

    else
 
        {
            printf("Gaz");
        }
    return 0;
}