#include <stdio.h>
void findOddEven(int n, int k)
{
    int i, a, b = 0;
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[b] = i;
            a = b++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            if (a <= n - 1)
            {
                arr[a + 1] = i;
                a++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d", arr[k - 1]);
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    findOddEven(n, k);
    return 0;
}