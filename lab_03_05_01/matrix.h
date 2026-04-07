#ifndef MATRIX_H
#define MATRIX_H

#define INPUT_ERROR 1

#define MAX_SIZE 10
typedef int Matrix[MAX_SIZE][MAX_SIZE];

int input_rows_cols(int *colsn, int *rowsn);
int input_matrix(Matrix mat, int *colsn, int *rowsn);
int find_digit_sum(int num);
int collect_elements(Matrix mat, int rowsn, int colsn, int *arr, int *cnt);
void shift_array_left(int *arr, int cnt);
void put_elements_back(Matrix mat, int rowsn, int colsn, int *arr);
void print_matrix(Matrix mat, int rowsn, int colsn);

#endif
