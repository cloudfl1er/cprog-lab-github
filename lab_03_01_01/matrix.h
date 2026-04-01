#ifndef MATRIX_H
#define MATRIX_H

#define INPUT_ERROR 1

#define MAX_SIZE 10
typedef int Matrix[MAX_SIZE][MAX_SIZE];

int input_matrix(Matrix mat, int *colsn, int *rowsn);
int input_rows_cols(int *colsn, int *rowsn);
void find_rows(Matrix mat, int colsn, int rowsn, int *res);
void print_row(int *arr, int len);

#endif
