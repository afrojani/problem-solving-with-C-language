// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("enter two values: ");
//     scanf("%d%d", &a, &b);
//     printf("the value of a is %d\n", a);
//     printf("the value of b is %d", b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int array[2][3] = {{10, 20, 30}, {40, 50, 60}}, i = 1, j = 0;
//     array[i][j] = array[j][i];
//     printf("%d,%d", array[i][j], array[j + 1][i + 1]);

//     return 0;
// }
#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("I am inside the loop\n");

        i++;
    }
    return 0;
}
