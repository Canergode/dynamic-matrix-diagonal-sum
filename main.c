#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, j, total = 0;
    int **matrix;

    // Get matrix size from user
    printf("Enter the matrix size:\n");
    scanf("%d", &size);

    // Allocate memory for square matrix
    matrix = (int **)malloc(sizeof(int *) * size);

    for (i = 0; i < size; i++)
    {
        matrix[i] = (int *)calloc(size, sizeof(int));

        for (j = 0; j < size; j++)
        {
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sum (where row index == column index)
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
            {
                total += matrix[i][j];
            }
        }
    }

    printf("Diagonal sum: %d", total);

    // Free memory
    for (i = 0; i < size; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}


