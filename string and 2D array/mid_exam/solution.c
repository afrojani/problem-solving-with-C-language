// #include <stdio.h>
// int main()
// {
//     int n = 10;
//     int x = 5;
//     int index = 0;
//     int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
//     int b[n];
//     for (int i = 0; i < n; i++)
//     {
//         // Write Code Here
//         b[i] = (a[i] + x);
//         printf("%d ", b[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ara[16];
//     int i;
//     for (i = 0; i < 15; i++)
//     {
//         ara[0] = 1;

//         ara[i + 1] = (ara[i] * 2);
//         printf("%d ", ara[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a[10];
//     a[0] = 98;
//     a[1] = 97;
//     a[2] = 'n';
//     a[3] = 'a';
//     a[4] = 'n';
//     a[5] = 'a';
//     a[6] = '\0';
//     printf("%c %c", a[0], a[1]);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a[10];
//     char ch = 'a';
//     for (int i = 0; i < 8; i++)
//     {
//         a[i] = ch + 8 - i;
//         printf("%d ", a[i]);
//     }
//     a[8] = '\0';

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int ara[12];
//     printf("%d", (int)sizeof ara);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i;
//     char a[101], b[101];
//     fgets(a, sizeof(a), stdin);
//     fgets(b, sizeof(b), stdin);

//     for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
//     {
//         if (a[i] >= 'A' && a[i] <= 'Z')
//             a[i] += 32;
//         if (b[i] >= 'A' && b[i] <= 'Z')
//             b[i] += 32;
//     }

//     int larger = 1;
//     for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
//     {
//         if (a[i] > b[i])
//         {
//             break;
//         }

//         else if (a[i] < b[i])
//         {
//             larger = 0;
//             break;
//         }
//     }

// printf("Lexicographically larger is ");

// for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
// {
//     if (larger == 1)
//     {
//         printf("%c", a[i]);
//     }
//     if (larger == 0)
//     {
//         printf("%c", b[i]);
//     }
// }
//     printf("In lexicographical order-\n");
//     if (larger == 1)
//     {
//         puts(b);
//         puts(a);
//     }
//     else if (larger == 0)
//     {
//         puts(a);
//         puts(b);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, sum = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &a);

//     while (a != 0)
//     {
//         sum = sum + (a % 10);
//         a = a / 10;
//     }

//     printf("Sum of digits: %d", sum);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j;
    int ara[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
    int row_sum, col_sum, left_diagonal_sum = 0, right_diagonal_sum = 0;
    int flag = 1;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                left_diagonal_sum = left_diagonal_sum + ara[i][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                right_diagonal_sum = right_diagonal_sum + ara[i][j];
            }
        }
        if (right_diagonal_sum != left_diagonal_sum)
        {
            flag = 0;
            break;
        }
    }

    for (i = 0; i < 3; i++)
    {
        row_sum = 0;
        for (j = 0; j < 3; j++)
        {
            row_sum = row_sum + ara[i][j];
        }

        if (row_sum != left_diagonal_sum)
        {
            flag = 0;
            break;
        }
    }

    for (i = 0; i < 3; i++)
    {
        col_sum = 0;
        for (j = 0; j < 3; j++)
        {
            col_sum = col_sum + ara[j][i];
        }

        if (col_sum != left_diagonal_sum)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Magic square");
    }
    else
    {
        printf("Not a magic square");
    }

    // printf("%d %d %d %d", row_sum, col_sum, left_diagonal_sum, right_diagonal_sum);

    return 0;
}