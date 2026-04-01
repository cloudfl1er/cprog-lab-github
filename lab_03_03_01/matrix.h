#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int read_matrix(Matrix mat, int *rows, int *cols);
void sort_rows_by_max(Matrix mat, int rows, int cols);
void print_matrix(Matrix mat, int rows, int cols);

#endif
