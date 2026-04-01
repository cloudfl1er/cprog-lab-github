#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Matrix mat;
    int rows, cols;
    if (read_matrix(mat, &rows, &cols) != 0)
    {
        fprintf(stderr, "Input error\n");
        return EXIT_FAILURE;
    }
    sort_rows_by_max(mat, rows, cols);
    print_matrix(mat, rows, cols);
    return EXIT_SUCCESS;
}
