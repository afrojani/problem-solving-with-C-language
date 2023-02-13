#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int b = 0; b < t; b++)
    {
        int l, r, a, i;
        scanf("%d %d", &l, &r);
        for (a = l; a <= r; a++)
        {
            int divisors = 0;

            for (i = 1; i <= a; i++)
            {
                if (a % i == 0)
                {
                    divisors++;
                }
            }

            if (divisors == 2 || divisors == 1)
            {
                printf("%d ", a);
            }
        }
        printf("\n");
    }
    return 0;
}