#include <stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    int max = (x > y) ? x : y;
    printf("The maximum value is: %d\n", max);

    return 0;
}