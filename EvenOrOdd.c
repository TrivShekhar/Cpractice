#include<stdio.h>
#include"Maths.h"
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    (evenOrOdd(num))?printf("%d is an even number",num):printf("%d is an odd number",num);
}