#include <stdio.h>

int main()
{
    int a = 5, b = 13;
    // Write code here
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    // End of code
    printf("%d and %d", a, b);
}
