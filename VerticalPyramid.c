#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<=10;i++)
{
    if(i<=5){
    for(j=0;j<=i;j++){
        printf("*");
    }}
    else{
        for(j=5;j>=i-5;j--){
            printf("*");
        }
    }
    printf("\n");
}

}