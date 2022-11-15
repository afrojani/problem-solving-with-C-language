#include <stdio.h>
int main()
{
    printf("Hi there /\\.\t I hope you are doing great and practicing well.\nNow this is a simple task you need to do.\tJust care for the indentation.\nShow 100%% of sincerity.");
    return 0;
}
// ---------------------------------
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("%d %d", b, a);
    return 0;
}
// --------------------------------------
#include <stdio.h>
int main()
{
    int a;
    printf("enter an integer: ");
    scanf("%d", &a);
    printf("%d", a * 2);
    return 0;
}
// ---------------------------------------
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("%d %d %d", a + b, a - b, a * b);
    return 0;
}
// --------------------------------------
#include <stdio.h>
int main()
{
    int a;
    scanf("%d%%", &a);
    printf("%d", a);
    return 0;
}