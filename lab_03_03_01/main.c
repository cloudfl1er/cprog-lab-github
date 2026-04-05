#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Matrix mat;
    int rowsn, colsn;

    if (input_matrix(mat, &rowsn, &colsn) != 0)
    {
        return INPUT_ERROR;
    }

    gtl_sort_rows_by_max(mat, rowsn, colsn);
    print_matrix(mat, rowsn, colsn);
}
