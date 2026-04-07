#include "matrix.h"
#include <stdio.h>

int main(void)
{
    Matrix mat;
    int n;

    printf("Введи размер матрицы (n) и её элементы по порядку:\n");
    
    if (input_size(&n) != 0)
    {
        return INPUT_ERROR;
    }

    fill_spiral(mat, n);
    print_matrix(mat, n, n);
}
