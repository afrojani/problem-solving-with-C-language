#include <stdio.h>
int main()
{
    int N;
    printf("enter no. of elements in the array: ");
    scanf("%d", &N);
    int ara[N];
    int e, Q, j, i, v;
    printf("enter %d number of elements for the array: ", N);

    for (e = 0; e < N; e++)
    {
        scanf("%d", &ara[e]);
    }
    printf("enter number of queries: ");
    scanf("%d", &Q);
    for (j = 1; j <= Q; j++)
    {
        scanf("%d%d", &i, &v);
        ara[i] += v;
    }
    for (e = 0; e < N; e++)
    {
        printf("%d ", ara[e]);
    }
    return 0;
}