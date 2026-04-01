#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

int read_matrix(int mat[][MAX_SIZE], int *rows, int *cols);
void sort_rows_by_max(int mat[][MAX_SIZE], int rows, int cols);
void print_matrix(int mat[][MAX_SIZE], int rows, int cols);

#endif
