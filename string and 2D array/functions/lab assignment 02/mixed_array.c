#include <stdio.h>
int is_prime(int n)
{
    int i, divisors = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors++;
        }
    }

    if (divisors == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float avg_even(int num[], int n)
{
    int *ptr = num;
    int i, even_count = 0;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        if ((*(ptr + i)) % 2 == 0)
        {
            sum = sum + num[i];
            even_count++;
        }
    }
    float avrg = (sum / even_count);
    return avrg;
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
        if (is_prime(*(ptr + i)) == 1)
            count++;
    }
    printf("Prime Numbers: %d\n", count);
    printf("Average of all even integers: %.2f\n", avg_even(ara, n));

    return 0;
}