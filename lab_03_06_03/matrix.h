#ifndef MATRIX_H
#define MATRIX_H

#define INPUT_ERROR 1

#define MAX_SIZE 10
typedef int Matrix[MAX_SIZE][MAX_SIZE];

int input_size(int *n);
void fill_spiral(Matrix mat, int n);
void print_matrix(Matrix mat, int rowsn, int colsn);

#endif
