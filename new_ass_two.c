#include <stdio.h>
int main()
{

    int num, big = 0, small = 0;

    printf("Enter 4 numbers\n");

    scanf("%d", &num);
    big = num;
    small = num;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        if (num > big)
        {
            big = num;
        }
        else if (num < small)
        {
            small = num;
        }
    }

    printf("Biggest number is %d\n", big);
    printf("Smallest number is %d\n", small);
    return 0;
}
