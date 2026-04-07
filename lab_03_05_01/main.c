#include "matrix.h"
#include <stdio.h>

int main(void)
{
    Matrix mat;
    int rowsn, colsn;
    int arr[MAX_SIZE * MAX_SIZE];
    int cnt;

    printf("Введи кол-во строк, столбцов матрицы и её элементы по порядку:\n");
    
    if (input_matrix(mat, &colsn, &rowsn) != 0)
    {
        return INPUT_ERROR;
    }

    if (collect_elements(mat, rowsn, colsn, arr, &cnt) != 0)
    {
        return INPUT_ERROR;
    }

    shift_array_left(arr, cnt);
    put_elements_back(mat, rowsn, colsn, arr);
    print_matrix(mat, rowsn, colsn);
}
