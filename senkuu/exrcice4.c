#include <stdio.h>
int main()
{

    int ms, kmh;

    printf("give me speed in km/h..");
    scanf("%i", &kmh);
    ms = kmh * 0.27778;

    printf("the speed in m/s ..%i", ms);

    return 0;
}