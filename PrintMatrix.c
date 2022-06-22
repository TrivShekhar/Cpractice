#include<stdio.h>
void main(){
    int i,j,m,n;
    int a[50][50];
    printf("Enter the number of rows and columns (<50)\n");
    scanf("%d%d",&n,&m);
   
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}