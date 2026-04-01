#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int read_matrix(Matrix mat, int *rows, int *cols);
void check_sym_rows(Matrix mat, int rows, int cols, int res[]);
void print_arr(int arr[], int len);

#endif
