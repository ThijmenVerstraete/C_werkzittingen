#include <stdio.h>
#define N 2

void multiply(int matrix1[N][N], int matrix2[N][N], int matrixOutput[N][N]);
void printMatrix(int matrix[N][N]);

int main(void)
{
    int matrix1[N][N] = {{1, 2}, {3, 4}};
    int matrix2[N][N] = {{5, 6}, {7, 8}};
    int matrixOutput[N][N] = {{0, 0}, {0, 0}};
    multiply(matrix1,matrix2,matrixOutput);
    printMatrix(matrixOutput);
    return 0;
}

void multiply(int matrix1[N][N], int matrix2[N][N], int matrixOutput[N][N])
{
   for(int row=0; row<N;row++) 
   {
        for(int col=0; col<N; col++)
        {
            for(int i=0; i<N; i++)
            {
                matrixOutput[col][row] += matrix1[col][i]*matrix2[i][row];
            }
        }
   }
}

void printMatrix(int matrix[N][N])
{
    for(int col=0; col<N; col++)
    {
        for(int row=0; row<N; row++)
        {
            printf("%i ", matrix[col][row]);
        }
        printf("\n");
    }
}