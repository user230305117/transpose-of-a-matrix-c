#include <stdio.h>
#include <stdlib.h>

// transpose: rows become columns and columns become rows
// ex: b[j][i] = a[i][j]

int main()
{
    // define maximum 10x10 matrices
    int mainmatrix[10][10], transpose[10][10];
    int row, column, i, j;

    // get matrix dimensions from the user
    printf("enter the number of the rows (max 10): \n");
    scanf("%d", &row);
    printf("enter the number of the columns (max 10): \n");
    scanf("%d", &column);

    // boundary check to prevent buffer overflow
    if (row > 10 || column > 10) {
        printf("error! maximum size is 10x10.\n");
        return 1;
    }

    // input elements for the main matrix
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("mainmatrix[%d][%d]: ", i, j);
            scanf("%d", &mainmatrix[i][j]);
        }
    }

    printf("\n");


    // display the original matrix
    printf("mainmatrix: \n");
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("%4d", mainmatrix[i][j]);
        }
         printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            transpose[j][i] = mainmatrix[i][j];
        }
    }

    printf("\n");

    // display the transposed matrix
    printf("transpose: \n");
    for(i=0; i<column; i++){
        for(j=0; j<row; j++){
            printf("%4d", transpose[i][j]);
        }
         printf("\n");
    }
    return 0;
}
