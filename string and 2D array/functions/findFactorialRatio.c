#include <stdio.h>
int factorialValue(int a)
{
    int i, multiply = 1;
    for (i = 1; i <= a; i++)
    {
        multiply = multiply * i;
    }
    return multiply;
}
float factorialRatio(int a, int b)
{
    float firstValue = factorialValue(a);
    printf("%.2f\n", firstValue);
    float secondValue = factorialValue(b);
    printf("%.2f\n", secondValue);
    float ratio = (firstValue / secondValue);
    return ratio;
}
int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    float ans = factorialRatio(i, j);
    printf("%.2f", ans);
    return 0;
}