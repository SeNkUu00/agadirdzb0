#include <stdio.h>
int main()
{

    float c, k;

    printf(" la temperature en Celsius..");
    scanf("%f", &c);
    k = c + 273.15;
    printf("la temperature en  Kelvin est.. %.2f", k);

    return 0;
}