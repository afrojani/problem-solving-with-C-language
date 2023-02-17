#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            a = n / 10;
            n = a;
            // prothome vul korsi j n er value change kori nai.. r change na korle
            // protibar to ek i n er value astese r eki calculation chobe.
        }
        else if (n % 10 != 0)
        {
            a = (n - 1);
            n = a;
        }
    }
    printf("%d", a);
    return 0;
}