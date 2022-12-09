#include <stdio.h>
#include <string.h>
int main()
{
    int n, j;

    scanf("%d", &n); // how many string

    char str[n][2000]; // Can store n number of strings, each of length 20

    // input each string
    for (j = 0; j < n; j++)
    {
        scanf("%s", str[j]);
        // scanf diye input nile words er majhe space deya jay na, space dile seta ke arekta input hisebe dhore. kintu ei porblem e amader single word input lagbe, so scanf dile problem nei. otherwise fgets use korte hobe.
    }

    // display each string
    for (j = 0; j < n; j++)
    {
        int l = strlen(str[j]);
        // 2D array nile tokhn ar minus one kroar proyojon nei jehetu enter chaple setake character dhore na.

        // printf("%d", l);
        if (l > 10)
        {
            printf("%c%d%c", str[j][0], l - 2, str[j][l - 1]);
        }
        else
        {
            printf("%s", str[j]);
        }

        printf("\n");
    }

    return 0;
}