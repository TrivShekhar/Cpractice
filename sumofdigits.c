// Program to find a sum of digits of a number using recursion
#include<stdio.h>
int sumDigit(int n)
{
   if(n<1)
     return 0;
   int prevSum=sumDigit(n/10);
   return (n%10)+prevSum;
}
int main()
{
    int n;
    printf("Enter number whose digits is to be printed :");
    scanf("%d",&n);
    printf("Sum :%d",sumDigit(n));
    return 0;
}