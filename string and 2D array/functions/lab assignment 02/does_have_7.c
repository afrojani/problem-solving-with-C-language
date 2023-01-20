#include <stdio.h>
#include <math.h>
int does_seven_exist(int n)
{
    while (n != 0)
    {
        if (n % 10 == 7)
            return 1;
        n = n / 10;
    }
    return 0;
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
    int *ptr = ara;
    for (i = 0; i < n; i++)
    {
        if (does_seven_exist(*(ptr + i)) == 1)
            count++;
    }
    if (n % 2 == 0)
    {
        if (count >= (n / 2))
            printf("Beautiful");
        else
            printf("Ugly");
    }
    if (n % 2 == 1)
    {
        if (count >= (n / 2 + 1))
            printf("Beautiful");
        else
            printf("Ugly");
    }

    return 0;
}