#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int read_matrix(Matrix mat, int *rows, int *cols);
int digit_sum(int n);
void find_min_digit_sum(Matrix mat, int rows, int cols, int *row, int *col);
void delete_row_col(Matrix mat, int *rows, int *cols, int r, int c);
void print_matrix(Matrix mat, int rows, int cols);

#endif
