#include <stdio.h>
int main()
{
    int n = 5;
    int ara[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}