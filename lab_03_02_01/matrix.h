#ifndef MATRIX_H
#define MATRIX_H

#define INPUT_ERROR 1

#define MAX_SIZE 10
typedef int Matrix[MAX_SIZE][MAX_SIZE];

int input_matrix(Matrix mat, int *colsn, int *rowsn);
int input_rows_cols(int *colsn, int *rowsn);
void find_number_with_max_digit_sum(Matrix mat, int *colsn, int *rowsn, int *coord_x, int *coord_y);
void delete_columns(Matrix mat, int *colsn, int *rowsn, int *coord_y);
void delete_rows(Matrix mat, int *colsn, int *rowsn, int *coord_x);
void print_new_matrix(Matrix mat, int *colsn, int *rowsn);

#endif