#include <stdio.h>
void even_sum(int N)
{
    int found = 0;
    int i, summ, A;
    for (i = 2; i < N; i += 2)
    {
        summ = 0;
        for (int j = i; j <= i + 6; j += 2)
        {
            summ = summ + j;
        }
        if (summ == N)
        {
            A = i;
            found = 1;
            break;
        }
    }
    if (found)
    {
        for (i = A; i <= A + 6; i += 2)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else
        printf("No such sequence!");
}
int main()
{
    int T;
    int k;
    scanf("%d", &T);
    for (k = 0; k < T; k++)
    {
        int N;
        scanf("%d", &N);
        even_sum(N);
    }

    return 0;
}