#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mat[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    if (read_matrix(mat, &rows, &cols) != 0)
    {
        fprintf(stderr, "Input error\n");
        return EXIT_FAILURE;
    }
    if (shift_elements(mat, rows, cols) != 0)
    {
        fprintf(stderr, "No elements with digit sum greater than ten\n");
        return EXIT_FAILURE;
    }
    print_matrix(mat, rows, cols);
    return EXIT_SUCCESS;
}
