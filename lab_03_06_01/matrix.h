#ifndef MATRIX_H
#define MATRIX_H

#define MAX_SIZE 10

typedef int Matrix[MAX_SIZE][MAX_SIZE];

int read_size(int *n);
void fill_spiral(Matrix mat, int n);
void print_matrix(Matrix mat, int n);

#endif
