#include <stdio.h>
int main()
{
    int i, j;
    int n = 7;
    // 7 stars print
    for (j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");

    // hollow print

    for (i = 1; i <= (n - 2); i++)
    {
        printf("*");

        for (j = 1; j <= (n - 2); j++)
        {
            printf(" ");
        }

        printf("*\n");
    }

    // 7 stars print
    for (j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}