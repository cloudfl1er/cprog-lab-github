#include "matrix.h"
#include <stdio.h>

int input_size(int *n)
{
    if (scanf("%d", n) != 1)
    {
        return -1;
    }
    if (*n < 1 || *n > MAX_SIZE)
    {
        return -1;
    }
    return 0;
}

void fill_spiral(Matrix mat, int n)
{
    int top = 0, bot = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bot && left <= right)
    {
        for (int j = left; j <= right; j++)
            mat[top][j] = num++;
        top++;

        for (int i = top; i <= bot; i++)
            mat[i][right] = num++;
        right--;

        for (int j = right; j >= left; j--)
            mat[bot][j] = num++;
        bot--;

        for (int i = bot; i >= top; i--)
            mat[i][left] = num++;
        left++;
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
