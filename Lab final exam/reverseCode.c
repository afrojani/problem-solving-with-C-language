#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int N;
        scanf("%d", &N);
        int a, s;
        while (N != 0)
        {
            a = N % 10;
            s = a + 64;
            printf("%c", s);
            N = N / 10;
        }
        printf("\n");
    }
    return 0;
}