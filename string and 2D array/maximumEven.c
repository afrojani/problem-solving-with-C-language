#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d\n", &n);
    int ara[21];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &ara[i]);
    }
    int evn = ara[0];
    int maxCount = 0;
    int sum = 0;
    for (i = 0; i < n / 2; i++)
    {
        if ((ara[i] / 2) == 0 && ara[i] > evn)
        {
            evn = ara[i];
        }
        for (j = n / 2; j < n; j++)
        {
            if ((ara[j] / 2) == 0 && ara[j] > evn)
            {
                evn = ara[i];
            }
            if ((ara[i] + ara[j]) / 2 == 0 && (ara[i] + ara[j]) > maxCount)
            {
                maxCount = ara[i] + ara[j];
            }
        }
    }
    if (maxCount > evn)
    {
        printf("%d", maxCount);
    }
    else if (evn > maxCount)
    {
        printf("%d", evn);
    }
    return 0;
}