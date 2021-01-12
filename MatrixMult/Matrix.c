#include "Matrix.h"

int main()
{
    int product[10][10];
    int i, j, k, row, col;
    int a[2][2] = {
                  {1,2},
                  {3,4}};
    int b[2][3] = {
                  {5,6,7},
                  {8,9,10}};

    row = 2;
    col = 3;

    /*option turn the variable row and col into a input to set dimentsions and then input for each cell*/
    printf("Matrix one\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j <col-1; j++) /*having col as input when creating a matrix will eliminate the purpose for col -1*/
        {
            printf("%d\t" ,a[i][j]);
        }
        printf("\n");
    } 
    
    printf("Matrix Two\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j <col; j++)
        {
            printf("%d\t" ,b[i][j]);
        }
        printf("\n");
    } 

    printf("******************************\n");
    printf("Result\n");
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            product[i][j] = 0;
            for(k = 0; k < row; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j <col; j++)
        {
            printf("%d\t" ,product[i][j]);
        }
        printf("\n");
    } 
    return 0;


}