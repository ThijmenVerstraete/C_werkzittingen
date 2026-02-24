#include <stdio.h>

#define N 3
void multipyVectors(float *vector1, float *vector2, float *outputVector);
void printArray(float *array);

int main(void)
{
    float vector1[N] = {0, 1, 2};
    float vector2[N] = {0, 1, 2};
    float outputVector[N] = {0, 0, 0};
    multipyVectors(vector1, vector2, outputVector);
    printArray(outputVector);
    return 0;
}

void multipyVectors(float *vector1, float *vector2, float *outputVector)
{

    for(int i=0; i<N; i++)
    {
        *(outputVector+i) = *(vector1+i) * *(vector2+i);
    }

    // printf("%i\n", &vector1[0]);
    // printf("%i\n", &vector1[1]);
    // printf("%i\n", vector1);
    // printf("%i\n", &vector1);
    // Expecte Output:
    // 170107536
    // 170107540
    // 170107536
    // 170107496
}

void printArray(float *array)
{
    for(int i=0; i<N; i++)
    {
        printf("%f ", *(array+i));
    }
    printf("\n");
}