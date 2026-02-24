#include <stdio.h>
#define N 6

void sortPointerArray(int *array[], int size);
void printPointerArray(int *array[], int size);

int main(void)
{
    int nums[N] = {5, 4, 2, 1, 4, 3};
    int *ptrs[N] = {&nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5]};
    printPointerArray(ptrs, N);
    sortPointerArray(ptrs, N);
    printPointerArray(ptrs, N);
    return 0;
}

void printPointerArray(int *array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%i ", *array[i]);
    }
    printf("\n");
}

void sortPointerArray(int *array[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            int valueI = *array[j];
            int valueJ = *array[j+1];
            printPointerArray(array, size);
            printf("I: %i\n", valueI);
            printf("J: %i\n", valueJ);

            if(valueI>valueJ)
            {
                int *temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}