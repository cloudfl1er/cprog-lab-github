#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Matrix mat;
    int n;
    if (read_square(mat, &n) != 0)
    {
        fprintf(stderr, "Input error\n");
        return EXIT_FAILURE;
    }
    flip_rows(mat, n);
    print_matrix(mat, n);
    return EXIT_SUCCESS;
}
