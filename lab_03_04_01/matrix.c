#include "matrix.h"
#include <stdio.h>

int input_rows_cols(int *n)
{
    if (scanf("%d", n) != 1) {
        return -1;
    }

    if (*n < 1 || *n > MAX_SIZE)
    {
        return -1;
    }

    return 0;
}



int input_matrix(Matrix mat, int *n)
{
    if (input_rows_cols(n) != 0)
    {
        return -1;
    }

    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            if (scanf("%d", &mat[i][j]) != 1)
            {
                return -1;
            }
        }
    }

    return 0;
}

void switch_matrix_rows(Matrix mat, int n)
{
    int c = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (c != n / 2)
        {
            for (int j = 0 + c; j < n - c; j++)
            {
                temp = mat[i][j];
                mat[i][j] = mat[n - 1 - i][j];
                mat[n - 1 - i][j] = temp;
            }
        }
        c++;
    }
}

void print_matrix(Matrix mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}