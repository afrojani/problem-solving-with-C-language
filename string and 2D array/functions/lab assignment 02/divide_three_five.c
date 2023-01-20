#include <stdio.h>
int div_by_3(int num)
{
    if (num % 3 == 0)
        return 1;
    else
        return -1;
}
int div_by_5(int num)
{
    if (num % 5 == 0)
        return 1;
    else
        return -1;
}

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (div_by_3(ara[i]) == 1 && div_by_5(ara[i]) != 1)
            count++;
        else if (div_by_3(ara[i]) != 1 && div_by_5(ara[i]) == 1)
            count++;
        else if (div_by_3(ara[i]) == 1 && div_by_5(ara[i]) == 1)
            count++;
    }
    if (count == 0)
        printf("-1\n");
    else
        printf("%d\n", count);
    return 0;
}