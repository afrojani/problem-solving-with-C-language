#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int *X = &x;
    int *Y = &y;

    printf("%d %d\n", *X, *Y);
    return 0;
}