#include<stdio.h>
void main()
{
    int a[10][10],i,j,row,col,sum=0;
    printf("Enter the number of rows and columns of matrices\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of matrix \n");
    if(row==col)
    {
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The sum of diagonal elements of matrix  is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
    }
    else
    {
        printf("The sum of diagonal elements of non square matrix  is not possible:\n");
    }


}
