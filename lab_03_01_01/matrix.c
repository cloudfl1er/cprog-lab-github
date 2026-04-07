#include <stdio.h>
#include "matrix.h"

int input_rows_cols(int *colsn, int *rowsn)
{
    if (scanf("%d", rowsn) != 1)
    {
        return -1;
    }

    if (scanf("%d", colsn) != 1)
    {
        return -1;
    }

    if (*rowsn < 1 || *rowsn > MAX_SIZE || *colsn < 1 || *colsn > MAX_SIZE)
    {
        return -1;
    }

    return 0;
}

int input_matrix(matrixx mat, int *colsn, int *rowsn)
{
    if (input_rows_cols(colsn, rowsn) != 0)
    {
        return -1;
    }

    for (int i = 0; i < *rowsn; i++)
    {
        for (int j = 0; j < *colsn; j++)
        {
            if (scanf("%d", &mat[i][j]) != 1)
            {
                return -1;
            }
        }
    }

    return 0;
}

void find_symetric_rows(matrixx mat, int colsn, int rowsn, int *arr)
{
    for (int i = 0; i < rowsn; i++)
    {
        arr[i] = 1;

        for (int j = 0; j < colsn / 2; j++)
        {
            if (mat[i][j] != mat[i][colsn - 1 - j])
            {
                arr[i] = 0;
                break;
            }
        }
    }
}

void print_row(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}