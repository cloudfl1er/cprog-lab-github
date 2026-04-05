#ifndef MATRIX_H
#define MATRIX_H

#define INPUT_ERROR 1

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int input_matrix(Matrix mat, int *colsn, int *rowsn);
int input_rows_cols(int *colsn, int *rowsn);
void gtl_sort_rows_by_max(Matrix mat, int rowsn, int colsn);
void print_matrix(Matrix mat, int rowsn, int colsn);

#endif
