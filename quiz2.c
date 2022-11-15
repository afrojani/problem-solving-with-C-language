#include <stdio.h>

int main()
{

    int arr[5], i, sum = 0;
    for (i = 1; i <= 5; i += 1)
    {
        arr[i - 1] = i;
    }

    for (i = 1; i <= 5; i += 1)
    {
        sum += arr[i - 1];
    }
    printf("%d\n", sum);
    return 0;
}