#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mat[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int r, c;
    if (read_matrix(mat, &rows, &cols) != 0)
    {
        fprintf(stderr, "Input error\n");
        return EXIT_FAILURE;
    }
    if (rows < 2 || cols < 2)
    {
        fprintf(stderr, "Matrix is too small to delete row and column\n");
        return EXIT_FAILURE;
    }
    find_min_digit_sum(mat, rows, cols, &r, &c);
    delete_row_col(mat, &rows, &cols, r, c);
    print_matrix(mat, rows, cols);
    return EXIT_SUCCESS;
}
