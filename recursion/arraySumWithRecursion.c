#include <stdio.h>
int summ(int arr[], int i, int n)
{
    if (i == n)
        return 0;
    int s = summ(arr, i + 1, n);
    return s + arr[i];
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = summ(arr, 0, n);
    printf("%d\n", s);
    return 0;
}