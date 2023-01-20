#include <stdio.h>
int sum_of_odd_even(int ara[], int n)
{
    int sum = 0, i;
    int found = 0;
    for (i = 1; i <= n; i++)
    {
        if ((i % 2 == 0) && (ara[i] % 2 == 0))
        {
            sum = sum + ara[i] + i;
            found++;
            printf("element %d  sum %d\n", ara[i], sum);
        }
        else if ((i % 2 == 1) && (ara[i] % 2 == 1))
        {
            sum = sum + ara[i] + i;
            found++;
            printf("element %d  sum %d\n", ara[i], sum);
        }
    }
    if (found)
        return sum;
    else
        return 0;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[101];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int summ = sum_of_odd_even(ara, n);
    printf("\n");
    printf("%d\n", summ);
    return 0;
}