#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

int read_matrix(int mat[][MAX_SIZE], int *rows, int *cols);
int digit_sum(int n);
int shift_elements(int mat[][MAX_SIZE], int rows, int cols);
void print_matrix(int mat[][MAX_SIZE], int rows, int cols);

#endif
