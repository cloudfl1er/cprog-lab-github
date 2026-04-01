#include "matrix.h"
#include <stdio.h>

int read_matrix(Matrix mat, int *rows, int *cols)
{
    if (scanf("%d %d", rows, cols) != 2)
        return -1;
    if (*rows < 1 || *rows > MAX_SIZE || *cols < 1 || *cols > MAX_SIZE)
        return -1;
    for (int i = 0; i < *rows; i++)
        for (int j = 0; j < *cols; j++)
            if (scanf("%d", &mat[i][j]) != 1)
                return -1;
    return 0;
}

static int row_max(Matrix mat, int row, int cols)
{
    int m = mat[row][0];
    for (int j = 1; j < cols; j++)
        if (mat[row][j] > m)
            m = mat[row][j];
    return m;
}

void sort_rows_by_max(Matrix mat, int rows, int cols)
{
    int maxes[MAX_SIZE];
    for (int i = 0; i < rows; i++)
        maxes[i] = row_max(mat, i, cols);
    for (int i = 1; i < rows; i++)
    {
        int tmp[MAX_SIZE];
        int m = maxes[i];
        for (int k = 0; k < cols; k++)
            tmp[k] = mat[i][k];
        int j = i - 1;
        while (j >= 0 && maxes[j] < m)
        {
            for (int k = 0; k < cols; k++)
                mat[j + 1][k] = mat[j][k];
            maxes[j + 1] = maxes[j];
            j--;
        }
        for (int k = 0; k < cols; k++)
            mat[j + 1][k] = tmp[k];
        maxes[j + 1] = m;
    }
}

void print_matrix(Matrix mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j > 0)
                printf(" ");
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}
