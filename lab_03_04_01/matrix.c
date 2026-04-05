#include "matrix.h"
#include <stdio.h>

int input_rows_cols(int *colsn, int *rowsn)
{
    printf("Введи кол-во строк:\n");
    if (scanf("%d", rowsn) != 1) {
        return -1;
    }

    printf("Введи кол-во столбцов:\n");
    if (scanf("%d", colsn) != 1) {
        return -1;
    }

    if (*rowsn < 1 || *rowsn > MAX_SIZE || *colsn < 1 || *colsn > MAX_SIZE || *colsn != *rowsn)
    {
        return -1;
    }

    return 0;
}



int input_matrix(Matrix mat, int *colsn, int *rowsn)
{
    if (input_rows_cols(colsn, rowsn) != 0)
    {
        return -1;
    }

    for (int i = 0; i < *rowsn; i++)
    {
        for (int j = 0; j < *colsn; j++)
        {
            printf("Введи элемент [%d][%d]: ", i, j);
            if (scanf("%d", &mat[i][j]) != 1)
            {
                return -1;
            }
        }
    }

    return 0;
}

void switch_matrix_rows(Matrix mat, int rowsn, int colsn)
{
    int c = 0;
    int temp;
    for (int i = 0; i < rowsn; i++)
    {
        if (c != rowsn / 2)
        {
            for (int j = 0 + c; j < colsn - c; j++)
            {
                temp = mat[i][j];
                mat[i][j] = mat[rowsn - 1 - i][j];
                mat[rowsn - 1 - i][j] = temp;
            }
        }
        c++;
    }
}

void print_matrix(Matrix mat, int rowsn, int colsn)
{
    for (int i = 0; i < rowsn; i++)
    {
        for (int j = 0; j < colsn; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}