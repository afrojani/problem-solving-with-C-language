#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ara[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((ara[i] >= ara[k] && ara[k] != 0) || (ara[i] > ara[k] && ara[k] == 0))
            count++;
    }
    printf("%d\n", count);

    return 0;
}