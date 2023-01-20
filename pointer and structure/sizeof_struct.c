#include <stdio.h>
struct st
{
    char x;
    int ar[6];
    int a;
    double b;
};

int main()
{
    printf("%d", sizeof(struct st));
    return 0;
}
