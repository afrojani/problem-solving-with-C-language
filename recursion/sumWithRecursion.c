#include <stdio.h>
int summ(int i, int n)
{
    if (i > n)
        return 0;
    int s = summ(i + 1, n);
    return s + i;
}
int main()
{
    int n;
    scanf("%d", &n);
    int s = summ(1, n);
    printf("%d\n", s);
    return 0;
}