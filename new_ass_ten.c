#include <stdio.h>

int main()
{
    int n, i, divisors = 0;
    printf("Enter any number n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors++;
        }
    }

    if (divisors == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
    return 0;
}