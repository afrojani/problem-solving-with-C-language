#include <stdio.h>
void solve(int i, int n)
{
    if (i > n)
        return;
    solve(i + 1, n);
    // just ei line ta upore deya mane protibar print er age recursion k call kora.
    // tahole protibar print er kaj ta baki thakbe until i er value n er cheye beshi hoy.
    // tarpor ulta dik thk print kaj korbe.
    printf("%d\n", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
    return 0;
}