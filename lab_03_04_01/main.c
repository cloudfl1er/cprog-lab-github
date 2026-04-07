#include "matrix.h"
#include <stdio.h>

int main(void)
{
    Matrix mat;
    int n;

    printf("Введи размерность матрицы (n) и её элементы по порядку:\n");

    if (input_matrix(mat, &n) != 0)
    {
        return INPUT_ERROR;
    }

    switch_matrix_rows(mat, n);

    print_matrix(mat, n);
}
