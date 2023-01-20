#include <stdio.h>
void swap_array(int ara[], int L, int R)
{
    int *ptr = ara;
    int temp;
    temp = *(ptr + L);
    *(ptr + L) = *(ptr + R);
    *(ptr + R) = temp;
}
int main()
{
    int n, i, k, temp;
    scanf("%d", &n);
    int ara[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int Q;
    scanf("%d", &Q);
    for (k = 0; k < Q; k++)
    {
        int L, R;
        scanf("%d %d", &L, &R);
        swap_array(ara, L, R);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}