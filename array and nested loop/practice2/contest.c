// #include <stdio.h>
// int main()
// {
//     int T, i;
//     long long int S, A, B, C, M;
//     scanf("%d", &T);
//     for (i = 0; i < T; i++)
//     {
//         scanf("%lld %lld %lld %lld", &S, &A, &B, &C);
//         M = S - (A + B + C);
//         printf("%lld\n", M);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int N, k, i, count = 0;
//     int ara[102];
//     scanf("%d %d", &N, &k);
//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &ara[i]);
//     }
//     for (i = 0; i < N; i++)
//     {
//         if (ara[i] < k)
//             count = count + 1;
//     }
//     printf("%d", count);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i, temp = 0;
//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);
//     int ara[n];
//     printf("array elements: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &ara[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         if (temp < ara[i])
//         {
//             temp = ara[i];
//         }
//     }
//     printf("%d\n", temp);
//     printf("The numbers in ascending order is: ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", temp - ara[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int T, i, sum = 0;
//     scanf("%d", &T);
//     int ara[T];

//     for (i = 0; i < T; i++)
//     {
//         scanf("\n%d%%", &ara[i]);
//     }
//     for (i = 0; i < T; i++)
//     {
//         if (ara[i] < 60)
//         {
//             sum = (60 - ara[i]) + 40 + 60;
//         }
//         else if (ara[i] > 60 && ara[i] < 80)
//         {
//             sum = (80 - ara[i]) * 2 + 60;
//         }
//         else if (ara[i] > 80)
//         {
//             sum = (100 - ara[i]) * 3;
//         }
//         printf("%d minutes", sum);
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i, j, count, f, a;
//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);
//     int ara[n];
//     printf("array elements: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &ara[i]);
//     }
//     count = 0;
//     for (i = 0; i < n; i++)
//     {
//         a = ara[i];
//         f = 0;
//         if (ara[i] == 0 || ara[i] == 1)
//         {
//             f = 1;
//         }
//         for (j = 2; j < a; j++)
//         {
//             if (a % j == 0)
//             {
//                 f = 1;
//                 break;
//             }
//         }

//         if (f == 0)
//         {
//             count++;
//             printf("%d ", a);
//         }
//     }
//     printf("\n%d", count);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i, j, temp, k;
//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     int brr[n];
//     printf("array elements: ");
//     for (i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     scanf("%d", &k);

//     for (i = 1; i <= k; i++)
//     {
//         brr[n - k + i] = arr[i];
//     }
//     for (j = k + 1; j <= n; j++)
//     {
//         brr[j - k] = arr[j];
//     }

//     printf("The numbers in ascending order is: ");
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d ", brr[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    long long int N, i;
    scanf("%lld", &N);

    i = (N * (N - 1)) / 2;

    printf("%lld", i);

    return 0;
}