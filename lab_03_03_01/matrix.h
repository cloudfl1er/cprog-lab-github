#ifndef MATRIX_H
#define MATRIX_H

#define INVALID_INPUT 1

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int input_matrix(Matrix mat, int *colsn, int *rowsn);
int input_rows_cols(int *colsn, int *rowsn);
void g2l_sort_rows_max(Matrix mat, int rowsn, int colsn);
void print_matrix(Matrix mat, int rowsn, int colsn);

#endif