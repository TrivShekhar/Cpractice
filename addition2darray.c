#include<stdio.h>
void main(){
    int mat1[10][10],mat2[10][10],i,j,row,col;
    printf("Enter the number of rows and columns of matrices\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of matrix 1\n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        
    }
    printf("Enter the elements of matrix 1\n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&mat2[i][j]);
        } 
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)

        {
            mat1[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",mat1[i][j]);
        }
        
    }
    
    
}