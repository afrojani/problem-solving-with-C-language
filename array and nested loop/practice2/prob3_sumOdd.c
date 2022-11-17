#include <stdio.h>
int main()
{
    int n, i, summ;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int ara[n];
    printf("array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    summ = 0;

    for (i = 0; i < n; i++)
    {
        if (ara[i] % 2 == 1)
        {
            summ = summ + ara[i];
        }
    }

    if (summ % 2 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}