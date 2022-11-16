#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of elements in the array: ");
    scanf("%d", &n);
    int ara[n];
    int i, j, target;
    printf("enter %d number of elements for the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("enter a target value: ");
    scanf("%d", &target);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[i] + ara[j] == target)

            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}