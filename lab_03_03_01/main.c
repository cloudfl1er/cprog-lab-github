#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Matrix mat;
    int rowsn, colsn;

    printf("Введи кол-во строк, столбцов матрицы и её элементы по порядку:\n");
    
    if (input_matrix(mat, &rowsn, &colsn) != 0)
    {
        return INVALID_INPUT;
    }

    g2l_sort_rows_max(mat, rowsn, colsn);
    print_matrix(mat, rowsn, colsn);
    return EXIT_SUCCESS;
}