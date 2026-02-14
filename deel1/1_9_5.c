
#include <stdio.h>
int linearInterpolation();

int main(void)
{
    linearInterpolation();
    return 0;
}

struct intPoint{
    int x; 
    int y;
};
struct floatPoint{
    int x; 
    int y;
};

int linearInterpolation()
{
    struct intPoint p0;
    p0.x = 2;
    p0.y = 4;

    struct intPoint p1;
    p1.x = 10;
    p1.y = 8;

    float f = 1;

    struct floatPoint p3;
    p3.x = p0.x + f * (p1.x - p0.x);
    p3.y = p0.y + f * (p1.y - p0.y);

    printf("(%i, %i)\n", p3.x, p3.y);


    return 0;
}