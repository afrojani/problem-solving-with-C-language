#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of elements in the array: ");
    scanf("%d", &n);
    int ara[n];
    int i, j;
    printf("enter %d number of elements for the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d - ", ara[i]);
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                printf("%d ", ara[j]);
            }
        }
        printf("\n");
    }
    return 0;
}