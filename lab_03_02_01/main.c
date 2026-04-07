#include "matrix.h"
#include <stdio.h>

int main(void)
{
    Matrix mat;
    int colsn, rowsn;
    int coord_x, coord_y;

    printf("Введи кол-во строк, столбцов матрицы и её элементы по порядку:\n");

    if (input_matrix(mat, &colsn, &rowsn) != 0)
    {
        return INPUT_ERROR;
    }

    find_number_with_max_digit_sum(mat, &colsn, &rowsn, &coord_x, &coord_y);

    delete_columns(mat, &colsn, &rowsn, &coord_y);
    delete_rows(mat, &colsn, &rowsn, &coord_x);

    print_new_matrix(mat, &colsn, &rowsn);
}
