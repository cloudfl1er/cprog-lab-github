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

void check_sym_rows(Matrix mat, int rows, int cols, int res[])
{
    for (int i = 0; i < rows; i++)
    {
        res[i] = 1;
        for (int j = 0; j < cols / 2; j++)
        {
            if (mat[i][j] != mat[i][cols - 1 - j])
            {
                res[i] = 0;
                break;
            }
        }
    }
}

void print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}
