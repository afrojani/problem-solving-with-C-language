#include <stdio.h>
int summ(int arr[], int n)
{
    if (n == 0)
        return 0;
    int s = summ(arr + 1, n - 1);
    // funtion er vitore array sobsomoy pointer hisebe ashe.
    // ekhane arr+1 mane array er second pointer position k bujhacche.
    // evabe kore ek ek barte barte sob position e jabe.
    return s + *(arr);
    // ar ekhane sob position e giye array er value ta jog korbe.
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = summ(arr, n);
    printf("%d\n", s);
    return 0;
}