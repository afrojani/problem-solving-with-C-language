#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of elements in the array: ");
    scanf("%d", &n);
    int ara[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (ara[i] != ara[i + 1])

        {
            printf("NO");
            break;
        }

        else
        {
            printf("YES");
            break;
        }
    }
    return 0;
}