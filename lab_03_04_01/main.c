#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mat[MAX_SIZE][MAX_SIZE];
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
