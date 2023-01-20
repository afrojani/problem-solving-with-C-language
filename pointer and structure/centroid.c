#include <stdio.h>
#include <stdlib.h>
struct Point
{
    float x;
    float y;
};

struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point centroid(struct Triangle t)
{
    struct Point ans;
    ans.x = (t.A.x + t.B.x + t.C.x) / 3;
    ans.y = (t.A.y + t.B.y + t.C.y) / 3;
    return ans;
}

int main()
{
    struct Point p1;
    struct Point p2;
    struct Point p3;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    scanf("%f %f", &p3.x, &p3.y);

    struct Triangle t = {p1, p2, p3};

    struct Point c = centroid(t);
    printf("The centroid is (%f,%f)\n", c.x, c.y);

    return 0;
}