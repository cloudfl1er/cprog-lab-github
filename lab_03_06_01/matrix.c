#include "matrix.h"
#include <stdio.h>

int read_size(int *n)
{
    if (scanf("%d", n) != 1)
        return -1;
    if (*n < 1 || *n > MAX_SIZE)
        return -1;
    return 0;
}

void fill_spiral(int mat[][MAX_SIZE], int n)
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
        if (top <= bot)
        {
            for (int j = right; j >= left; j--)
                mat[bot][j] = num++;
            bot--;
        }
        if (left <= right)
        {
            for (int i = bot; i >= top; i--)
                mat[i][left] = num++;
            left++;
        }
    }
}

void print_matrix(int mat[][MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0)
                printf(" ");
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}
