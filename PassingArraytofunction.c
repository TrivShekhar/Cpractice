#include <stdio.h>
void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void main(){
    int a[5]={1,2,3,4,5};
    printarray(a,5);
}