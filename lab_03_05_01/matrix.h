#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int read_matrix(Matrix mat, int *rows, int *cols);
int digit_sum(int n);
int shift_elements(Matrix mat, int rows, int cols);
void print_matrix(Matrix mat, int rows, int cols);

#endif
