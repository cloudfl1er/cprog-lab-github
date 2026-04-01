#include <stdio.h>
#include "matrix.h"


int main(void) {
    Matrix mat;
    int colsn, rowsn;
    int res[MAX_SIZE];

    if (input_matrix(mat, &colsn, &rowsn) != 0)
    {
        return INPUT_ERROR;
    }

    find_rows(mat, colsn, rowsn, res);

    print_row(res, rowsn);
}
