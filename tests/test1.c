#include <math.h>
#include "../matrices.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    mat *matA = mat_init(3, 3);
    double arr[] = {1, -2, 0, 2, 1, 3, -4, 5, 1};
    matA->arr = arr;

    mat_LU *LU = mat_LU_factorise(matA);
    printf("The matrix A was:\n");
    mat_print(matA);
    printf("\n");

    printf("The matrix L is:\n");
    mat_print(LU->mtL);
    printf("\n");

    printf("The matrix U is:\n");
    mat_print(LU->mtU);
    printf("\n");

    printf("The matrix P is:\n");
    mat_print(LU->mtP);


    return 0;
}

