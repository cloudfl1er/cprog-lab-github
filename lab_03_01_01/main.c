#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Matrix mat;
    int rows, cols;
    int res[MAX_SIZE];
    if (read_matrix(mat, &rows, &cols) != 0)
    {
        fprintf(stderr, "Input error\n");
        return EXIT_FAILURE;
    }
    check_sym_rows(mat, rows, cols, res);
    print_arr(res, rows);
    return EXIT_SUCCESS;
}
