// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     if (b > a)
//     {
//         printf("%d is bigger", b);
//     }
//     else if (a > b)
//     {
//         printf("%d is bigger", a);
//     }
//     else
//     {
//         printf("they are equal");
//     }

//     return 0;
// }
// ---------------------------------------

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b || a == c || b == c)
    {
        if (a == b && b == c && a == c)
        {
            printf("all are equal");
        }
        else if (a > b)
        {
            printf("A & C both are bigger");
        }
        else if (b > c)
        {
            printf("A & B both are bigger");
        }
        else
        {
            printf("B and C both are bigger");
        }
    }
    else
    {
        if (a > b && a > c)
        {
            printf("%d is bigger", a);
        }
        else if (b > a && b > c)
        {
            printf("%d is bigger", b);
        }
        else if (c > a && c > b)
        {
            printf("%d is bigger", c);
        }
    }
    return 0;
}
// ---------------------------------------