#include "matrix.h"
#include <stdio.h>

int read_matrix(Matrix mat, int *rows, int *cols)
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

int shift_elements(Matrix mat, int rows, int cols)
{
    int arr[MAX_SIZE * MAX_SIZE];
    int pi[MAX_SIZE * MAX_SIZE];
    int pj[MAX_SIZE * MAX_SIZE];
    int cnt = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (digit_sum(mat[i][j]) > 10)
            {
                arr[cnt] = mat[i][j];
                pi[cnt] = i;
                pj[cnt] = j;
                cnt++;
            }
    if (cnt == 0)
        return -1;
    int shifted[MAX_SIZE * MAX_SIZE];
    int sh = 3 % cnt;
    for (int i = 0; i < cnt; i++)
        shifted[i] = arr[(i + sh) % cnt];
    for (int i = 0; i < cnt; i++)
        mat[pi[i]][pj[i]] = shifted[i];
    return 0;
}

void print_matrix(Matrix mat, int rows, int cols)
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
