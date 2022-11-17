#include <stdio.h>
int main()
{
    int n, i, j, temp, k;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int ara[n];
    printf("array elements: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("position value: ");
    scanf("%d", &k);

    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    printf("The numbers in ascending order is: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d ", ara[i]);
    }

    printf("\n%d", ara[k]);
    return 0;
}