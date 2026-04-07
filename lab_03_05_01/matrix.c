#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int input_rows_cols(int *colsn, int *rowsn)
{
    if (scanf("%d", rowsn) != 1) {
        return -1;
    }

    if (scanf("%d", colsn) != 1) {
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
    if (num < 0)
        num = -num;
    int summ = 0;
    if (num == 0)
        return 0;
    while (num != 0)
    {
        summ += num % 10;
        num /= 10;
    }
    return summ;
}

int collect_elements(Matrix mat, int rowsn, int colsn, int *arr, int *cnt)
{
    *cnt = 0;
    for (int i = 0; i < rowsn; i++)
    {
        for (int j = 0; j < colsn; j++)
        {
            if (find_digit_sum(mat[i][j]) > 10)
            {
                arr[*cnt] = mat[i][j];
                (*cnt)++;
            }
        }
    }

    if (*cnt == 0)
    {
        return -1;
    }

    return 0;
}

void shift_array_left(int *arr, int cnt)
{
    int shift = 3 % cnt;
    int tmp[MAX_SIZE * MAX_SIZE];
    for (int i = 0; i < cnt; i++)
        tmp[i] = arr[(i + shift) % cnt];
    for (int i = 0; i < cnt; i++)
        arr[i] = tmp[i];
}

void put_elements_back(Matrix mat, int rowsn, int colsn, int *arr)
{
    int k = 0;
    for (int i = 0; i < rowsn; i++)
    {
        for (int j = 0; j < colsn; j++)
        {
            if (find_digit_sum(mat[i][j]) > 10)
            {
                mat[i][j] = arr[k];
                k++;
            }
        }
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
