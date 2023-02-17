#include <stdio.h>
int main()
{
    long long int n, m, a, l = 0, w = 0;
    scanf("%lld%lld%lld", &n, &m, &a);
    // length e koyta square lagbe ta ber korbo.
    if (n % a == 0)
        l = n / a;
    else
        l = (n / a) + 1;
    if (m % a == 0)
        w = m / a;
    else
        w = (m / a) + 1;

    printf("%lld\n", l * w);

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     // Input
//     long long int m, n, a, i = 0, j = 0;
//     scanf("%lld%lld%lld", &n, &m, &a);

//     // length condition check.
//     if (n % a == 0)
//         i = n / a;
//     else
//         i = (n / a) + 1;
//     // breadth condition check.
//     if (m % a == 0)
//         j = m / a;
//     else
//         j = (m / a) + 1;

//     //  Output
//     printf("%lld\n", i * j);
//     return 0;
// }