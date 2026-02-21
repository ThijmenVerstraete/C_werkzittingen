#include <stdio.h>
#define ARRAY_LENGTH 5

void bubbleSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    int unsortedArray[ARRAY_LENGTH] = {5, 4, 3, 2, 1};
    bubbleSort(unsortedArray, ARRAY_LENGTH);
    return 0;
}

void bubbleSort(int array[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            int leftValue = array[j];
            int rightValue = array[j+1];
            if(leftValue > rightValue)
            {
                array[j]    = array[j] + array[j+1];
                array[j+1]  = array[j] - array[j+1];
                array[j]    = array[j] - array[j+1];
            }
            printArray(array, size);
        }
        printf("\n");
    }

    printArray(array, size);
}

void printArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}