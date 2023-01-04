#include <stdio.h>
int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}

int summ(int a, int b)
{
    int c = 0;
    int ans1 = add_three_nums(a, b, c);
    return ans1;
}
int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    int ans2 = summ(i, j);
    printf("%d", ans2);
    return 0;
}