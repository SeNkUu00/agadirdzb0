#include <stdio.h>
int main()
{

    float yards, km;

    printf("give me distance in km ");
    scanf("%f", &km);
    yards = km * 1093.61;
    printf("the distance in yards is %.2f", yards);

    return 0;
}