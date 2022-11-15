#include <stdio.h>
int main()
{
    int a, b, x, y;
    printf("enter four integers between 1-100: ");
    scanf("%d%d%d%d", &a, &b, &x, &y);
    if (a > b && x > y)
    {
        if (a > y && x > b)
        {
            printf("fair");
        }
        else
        {
            printf("No");
        }
    }
    else if (a > b && y > x)
    {
        if (a > x && y > b)
        {
            printf("fair");
        }
        else
        {
            printf("No");
        }
    }
    else if (b > a && x > y)
    {
        if (b > y && x > a)
        {
            printf("fair");
        }
        else
        {
            printf("No");
        }
    }
    else if (b > a && y > x)
    {
        if (b > x && y > a)
        {
            printf("fair");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}
