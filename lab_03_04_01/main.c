#include "matrix.h"
#include <stdio.h>

int main(void)
{
    Matrix mat;
    int rowsn, colsn;

    if (input_matrix(mat, &rowsn, &colsn) != 0)
    {
        return INPUT_ERROR;
    }

    switch_matrix_rows(mat, rowsn, colsn);

    print_matrix(mat, rowsn, colsn);
}
