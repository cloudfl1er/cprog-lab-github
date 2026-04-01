#include "matrix.h"
#include <stdio.h>

int read_square(int mat[][MAX_SIZE], int *n)
{
    if (scanf("%d", n) != 1)
        return -1;
    if (*n < 1 || *n > MAX_SIZE)
        return -1;
    for (int i = 0; i < *n; i++)
        for (int j = 0; j < *n; j++)
            if (scanf("%d", &mat[i][j]) != 1)
                return -1;
    return 0;
}

void flip_rows(int mat[][MAX_SIZE], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp = mat[i][j];
            mat[i][j] = mat[n - 1 - i][j];
            mat[n - 1 - i][j] = tmp;
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
