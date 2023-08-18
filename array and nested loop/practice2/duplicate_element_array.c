#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int input[n];
    for (i = 0; i < n; i += 1)
    {
        scanf("%d", &input[i]);
    }
    int largestElement = input[0];

    for (i = 1; i < n; i += 1)
    {
        if (input[i] > largestElement)
        {
            largestElement = input[i];
        }
    }

    int arr[largestElement + 1];

    for (i = 0; i <= largestElement; i += 1)
    {
        arr[i] = 0;
    }

    for (i = 0; i < n; i += 1)
    {
        arr[input[i]] += 1;
    }

    for (i = 0; i <= largestElement /*&& i != 0*/; i += 1)
    {
        // printf("%d", arr[i]);
        for (j = 0; j < arr[i]; j++)
        {
            printf("%d", i);
        }
    }

    int duplicate = 0, unique = 0;
    for (i = 0; i <= largestElement; i += 1)
    {
        if (arr[i] == 1)
            unique += 1;
        else if (arr[i] > 1)
            duplicate += 1;
    }
    printf("\nTotal duplicate element found  %d\n", duplicate);
    printf("Total unique element found  %d\n", unique);
    return 0;
}
