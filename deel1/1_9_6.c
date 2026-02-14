#include <stdio.h>
#include <math.h>

float series(float x);
int factorial(int n);

int main(void)
{
    float res = series(0.1);
    printf("%f\n", res);
    return 0;
}

float series(float x)
{
    float sum = 0;
    for(int n=0; n<=10; n++)
    {
        sum = sum + (pow(x, n) / factorial(n));
        //printf("sum: %f\n", sum);
    }

    return sum;
}

int factorial(int n)
{
    int output = 1;
    for (int i=1; i<= n; i++)
    {
        output = output*i;
    }
    return output;
}