#include<stdio.h>

void mult(int a[i][j], int b[i][j], int result[i][j], int row1,int row2, int col1, int col2)
{
    for(int i =0 ; i<row1; i++){
        for(int j = 0; j<col2; j++){
            result[i][j] = 0
            for(int k=0;k<col1;k++){
                result[i][j] += a[i][j]*b[i][j];
            }
        }
    }
}

void main ()
{
    int  a[i][j] , b[i][j] , result[i][j];
    int row1,col1,row2,col2;

    // input dimensions of first matrix
    printf("Enter the values rows and column in first matrix:");
    scanf("%d %d", &row1, &col1);

    // input dimensions of second matrix
    printf("Enter the values rows and column in first matrix:");
    scanf("%d %d", &row2, &col2);

    // input the first matrix
    printf("Enter elements of first matrix");
    for(i=0; i<row1; i++){
        for (j=0; j<col1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // input the second matrix
    printf("Enter elements of second matrix");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
           scanf("%d", &b[i][j]);
        }
    }

mult(a,b,result,row1,row2,col1,col2);

printf("Resultant matrix\n");
for(int i = 0; i<row1; i++){
    for(int j = 0; j<col2 ; j++){
        printf("%d", result[i][j]);
    }
    printf("\n");
}
}
