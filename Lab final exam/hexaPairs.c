#include <stdio.h>
int findGcd(int a, int b)
{
    int i, gcd;
    for (i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int b = 0; b < t; b++)
    {
        int n, k;
        scanf("%d", &n);
        int arr[n];
        for (k = 1; k <= n; k++)
        {
            scanf("%d", &arr[k]);
        }
        int i, j, gcd, count = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                else
                    gcd = findGcd(arr[i], arr[j]);

                if (gcd == 1)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}