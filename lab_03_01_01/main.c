#include <stdio.h>
#include "matrix.h"


int main(void) {
    Matrix mat;
    int colsn, rowsn;
    int res[MAX_SIZE];

    printf("Введи кол-во строк, столбцов матрицы и её элементы по порядку:\n");

    if (input_matrix(mat, &colsn, &rowsn) != 0)
    {
        return INPUT_ERROR;
    }

    find_symetric_rows(mat, colsn, rowsn, res);

    print_row(res, rowsn);
}
