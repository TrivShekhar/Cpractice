#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter twp numbers\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a: %d\t b: %d\n",a,b);

}