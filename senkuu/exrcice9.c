#include <stdio.h>
int main()
{

    char x;
    printf("donner un charactaire:");
    scanf("%c", &x);

    switch (x)
    {
    case 'a':
    case 'y':
    case 'e':
    case 'i':
    case 'u':
    case 'o':
    case 'A':
    case 'Y':
    case 'E':
    case 'I':
    case 'U':
    case 'O':
        printf("voyelle");
        break;
    default:
        printf("non voyelle");
        break;
    }
    return 0;
}