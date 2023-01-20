// #include <stdio.h>

// int sum_series(int N)
// {
//     int sum1 = 0;
//     int sum2 = 0;
//     for (int i = 1; i <= N; i + 6)
//     {
//         for (int j = i; j <= i + 3; j++)
//         {
//             sum1 = sum1 + j;
//         }
//     }
//     printf("%d\n", sum1);

//     for (int i = 4; i <= N; i + 6)
//     {
//         for (int j = i; j <= i + 3; j++)
//         {
//             sum2 = sum2 + j;
//         }
//     }
//     printf("%d\n", sum2);
//     int summ = (sum1 - sum2);
//     return summ;
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     printf("%d\n", sum_series(N));
//     return 0;
// }

#include <stdio.h>

int sum_series(int N)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i <= N; i += 6)
    {
        for (int j = i; j <= i + 2 && j <= N; j++)
        {
            sum1 = sum1 + j;
        }
    }

    for (int i = 4; i <= N; i += 6)
    {
        for (int j = i; j <= i + 2 && j <= N; j++)
        {
            sum2 = sum2 + j;
        }
    }
    return sum1 - sum2;
}

int main()
{
    int N;
    scanf("%d", &N);
    int summ = sum_series(N);
    printf("%d\n", summ);
    return 0;
}
