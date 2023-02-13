#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if ((X % 400 == 0) || (X % 4 == 0 && X % 100 != 0))
        printf("Yes");
    else
        printf("No");
    return 0;
}