// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x = 0;
//     for (int i = 0; i < n; i++)
//     {
//         char st[4];
//         scanf("%s", st);
//         if (st[1] == '+')
//         {
//             x++;
//         }
//         else
//         {
//             x--;
//         }
//     }
//     printf("%d\n", x);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int i, t, s = 0;
    char x[4];
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%s", &x);
        if ((strcmp(x, "X++") == 0) || (strcmp(x, "++X") == 0))
        {
            s = s + 1;
        }
        else if ((strcmp(x, "X--") == 0) || (strcmp(x, "--X") == 0))
        {
            s = s - 1;
        }
        s = s;
    }

    printf("%d\n", s);

    return 0;
}
