#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int A[n];
    int B[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    int temp1;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                temp1 = A[i];
                A[i] = A[j];
                A[j] = temp1;
            }
        }
    }
    int temp2;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (B[i] < B[j])
            {
                temp2 = B[i];
                B[i] = B[j];
                B[j] = temp2;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i] - B[i]);
    }
    // printf("\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", B[i]);
    // }

    return 0;
}