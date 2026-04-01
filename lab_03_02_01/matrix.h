#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

int read_matrix(int mat[][MAX_SIZE], int *rows, int *cols);
int digit_sum(int n);
void find_min_digit_sum(int mat[][MAX_SIZE], int rows, int cols, int *row, int *col);
void delete_row_col(int mat[][MAX_SIZE], int *rows, int *cols, int r, int c);
void print_matrix(int mat[][MAX_SIZE], int rows, int cols);

#endif
