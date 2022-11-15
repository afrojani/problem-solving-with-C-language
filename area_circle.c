#include <stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    float area;
    area = 3.1415 * radius * radius;
    printf("the area of the circle is %f", area);
    return 0;
}