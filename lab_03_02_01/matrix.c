#include "matrix.h"
#include <stdio.h>

int read_matrix(int mat[][MAX_SIZE], int *rows, int *cols)
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

int digit_sum(int n)
{
    int s = 0;
    if (n < 0)
        n = -n;
    if (n == 0)
        return 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void find_min_digit_sum(int mat[][MAX_SIZE], int rows, int cols, int *row, int *col)
{
    int mn = digit_sum(mat[0][0]);
    *row = 0;
    *col = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int s = digit_sum(mat[i][j]);
            if (s < mn)
            {
                mn = s;
                *row = i;
                *col = j;
            }
        }
    }
}

void delete_row_col(int mat[][MAX_SIZE], int *rows, int *cols, int r, int c)
{
    for (int i = r; i < *rows - 1; i++)
        for (int j = 0; j < *cols; j++)
            mat[i][j] = mat[i + 1][j];
    (*rows)--;
    for (int j = c; j < *cols - 1; j++)
        for (int i = 0; i < *rows; i++)
            mat[i][j] = mat[i][j + 1];
    (*cols)--;
}

void print_matrix(int mat[][MAX_SIZE], int rows, int cols)
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
