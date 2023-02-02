#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first = 0;
    int second = 1;
    int next;
    int count = 0;
    while (count < n)
    {
        if (count <= 1)
        {
            printf("%d, ", count);
        }
        else
        {
            next = first + second;
            printf("%d, ", next);
            first = second;
            second = next;
        }
        count++;
    }
    return 0;
}
