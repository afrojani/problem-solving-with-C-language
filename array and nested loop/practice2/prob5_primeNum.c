#include <stdio.h>
int main()
{
    int n, i, j, count, f, a;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int ara[n];
    printf("array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    count = 0;
    for (i = 0; i < n; i++)
    {
        a = ara[i];
        f = 0;
        for (j = 2; j < a; j++)
        {
            if (a % j == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            count++;
            printf("%d ", a);
        }
    }
    printf("\n%d", count);

    return 0;
}