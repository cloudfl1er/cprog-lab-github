#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

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

int find_digit_sum(int num)
{
    int c = 1;
    int summ = num % 10;
    
    while (num / 10 != 0)
    {
        c++;
        num /= 10;
        summ += num % 10;
    }

    return summ;
}

void find_number_with_max_digit_sum(Matrix mat, int *colsn, int *rowsn, int *coord_x, int *coord_y)
{
    int curnum, curnumsum;
    int maxnumsum = find_digit_sum(mat[0][0]);
    *coord_x = 0;
    *coord_y = 0;

    for (int i = 0; i < *rowsn; i++)
    {
        for (int j = 0; j < *colsn; j++)
        {
            curnum = mat[i][j];
            curnumsum = find_digit_sum(abs(curnum));

            if (curnumsum > maxnumsum)
            {
                maxnumsum = curnumsum;
                *coord_x = i;
                *coord_y = j;
            }
        }
    }
}

void delete_columns(Matrix mat, int *colsn, int *rowsn, int *coord_y)
{
    for (int i = 0; i < *rowsn; i++)
    {
        for (int j = *coord_y; j < *colsn; j++)
        {
           if (j != *colsn - 1)
            {
                mat[i][j] = mat[i][j + 1];
            } else
            {
                mat[i][j] = 0;
            }
        }
    }
}

void delete_rows(Matrix mat, int *colsn, int *rowsn, int *coord_x)
{
    for (int i = *coord_x; i < *rowsn; i++)
    {
        for (int j = 0; j < *colsn; j++)
        {
            if (i != *rowsn - 1)
            {
                mat[i][j] = mat[i + 1][j];
            } else
            {
                mat[i][j] = 0;
            }
        }
    }
}

void print_new_matrix(Matrix mat, int *colsn, int *rowsn)
{
    for (int i = 0; i < (*rowsn) - 1; i++)
    {
        for (int j = 0; j < (*colsn) - 1; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}