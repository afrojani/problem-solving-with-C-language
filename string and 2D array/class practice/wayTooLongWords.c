#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    char str[20][20]; // Can store 20 strings, each of length 20

    scanf("%d", &n); // how many string

    // input each string
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        // scanf diye input nile words er majhe space deya jay na, space dile seta ke arekta input hisebe dhore. kintu ei porblem e amader single word input lagbe, so scanf dile problem nei. otherwise fgets use korte hobe.
    }

    // display each string
    for (i = 0; i < n; i++)
    {
        int l = strlen(str[i]);
        // 2D array nile tokhn ar minus one kroar proyojon nei jehetu enter chaple setake character dhore na.

        printf("%d", l);
        if (l > 10)
        {
            printf("%c%d%c", str[i][0], l - 2, str[i][l - 1]);
        }
        else
        {
            printf("%s", str[i]);
        }

        printf("\n");
    }

    return 0;
}