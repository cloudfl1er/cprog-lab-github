#include "matrix.h"
#include <stdio.h>

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
            if (scanf("%d", &mat[i][j]) != 1)
            {
                return -1;
            }
        }
    }

    return 0;
}

int row_max(Matrix mat, int rowsn, int colsn)
{
    int m = mat[rowsn][0];

    for (int j = 1; j < colsn; j++)
        {
        if (mat[rowsn][j] > m)
            {
                m = mat[rowsn][j];
            }
        }

    return m;
}

void g2l_sort_rows_max(Matrix mat, int rowsn, int colsn)
{
    int maxes[MAX_SIZE];
    for (int i = 0; i < rowsn; i++)
    {
        maxes[i] = row_max(mat, i, colsn);
    }
    for (int i = 1; i < rowsn; i++)
    {
        int tmp[MAX_SIZE];
        int m = maxes[i];
        for (int k = 0; k < colsn; k++)
        {
            tmp[k] = mat[i][k];
        }
        int j = i - 1;
        while (j >= 0 && maxes[j] < m)
        {
            for (int k = 0; k < colsn; k++)
            {
                mat[j + 1][k] = mat[j][k];
            }
            maxes[j + 1] = maxes[j];
            j--;
        }
        for (int k = 0; k < colsn; k++)
            mat[j + 1][k] = tmp[k];
        maxes[j + 1] = m;
    }
}

void print_matrix(Matrix mat, int rowsn, int colsn)
{
    for (int i = 0; i < rowsn; i++)
    {
        for (int j = 0; j < colsn; j++)
        {
            if (j > 0)
                printf(" ");
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}
