#include <stdio.h>
int main()
{
    int i, j;
    int n = 7;
    // 7 stars print
    for (j = 1; j <= n; j++)
    {
        printf("%d", j);
    }
    printf("\n");

    // hollow print

    for (i = 1; i <= (n - 2); i++)
    {
        printf("%d", (i + 1));

        for (j = 1; j <= (n - 2); j++)
        {
            printf(" ");
        }

        printf("%d\n", n);
    }

    // 7 stars print
    for (j = 1; j <= n; j++)
    {
        printf("%d", n);
    }
    printf("\n");
    return 0;
}