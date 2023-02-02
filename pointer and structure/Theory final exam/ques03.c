#include <stdio.h>
void change_value(int *x)
{
    *x = 10;
}

int main()
{
    int a = 5;
    change_value(&a);
    printf("%d\n", a); // prints 6
}
