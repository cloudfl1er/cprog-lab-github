#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

int read_matrix(int mat[][MAX_SIZE], int *rows, int *cols);
void check_sym_rows(int mat[][MAX_SIZE], int rows, int cols, int res[]);
void print_arr(int arr[], int len);

#endif
