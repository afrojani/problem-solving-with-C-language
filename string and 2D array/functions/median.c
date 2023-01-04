#include <stdio.h>
float findMedian(int n, float nums[])
{
    float temp;
    int i, j, a;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", nums[i]);
    }

    float median;
    if (n % 2 == 0)
    {
        a = n / 2;
        median = ((nums[a - 1] + nums[a]) / 2);
        return median;
    }
    else if (n % 2 == 1)
    {
        a = n / 2;
        median = nums[a];
        return median;
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);

    float ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &ara[i]);
    }
    float med = findMedian(n, ara);
    printf("\nthe median is %.2f", med);
    return 0;
}