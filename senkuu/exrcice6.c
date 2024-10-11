#include <stdio.h>
int main()
{

    int n;

    printf("give me a number..");
    scanf("%i", &n);

    if (n % 2 == 0)
    {
        printf("pair");
    }
    else
    {

        printf("inpair");
    }
    return 0;
}