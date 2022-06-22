#include<stdio.h>
void main()
{
int matrix1[10][10],matrix2[10][10],product[10][10],row1,col1,row2,col2,i,j,k;
printf("Enter the number of rows and columns of matrix 1\n");
scanf("%d%d",&row1,&col1);
printf("Enter the number of rows and columns of matrix 2\n");
scanf("%d%d",&row2,&col2);
if(col1==row2)
{
printf("Enter the element of matrix 1\n");
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
        
        scanf("%d",&matrix1[i][j]);
    }
    
}
printf("Enter the element of matrix 2\n");
        
for (i=0;i<row2;i++)
{
    for(j=0;j<col2;j++)
    {
        scanf("%d",&matrix2[i][j]);
    }
}
for (i=0;i<row1;i++)
{
    for(j=0;j<col2;j++)
    {
        product[i][j]=0;
        for(k=0;k<col1;k++)
        {
            product[i][j]=product[i][j]+matrix1[i][k]*matrix2[k][j];
        }
    }
}
printf("The product of the two matrices is:\n");
for(i=0;i<row1;i++)
{
    for(j=0;j<col2;j++)
    {
        printf("%d\t",product[i][j]);
    }
    printf("\n");
}
}
else
{
    printf("The multiplication of the two matrices is not possible");
}
}
