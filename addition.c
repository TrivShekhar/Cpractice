#include<stdio.h>
long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}
int addition(int n1, int n2){
    int sum,carry;
    if(!n2){
        return n1;
    }
    sum = n1^n2;
    carry= (n1&n2);
    carry=carry<< 1;
    return addition(sum,carry);
}
int main()
{
    int n1,n2,i;
    printf("Enter first number :");
    scanf("%d",&n1);
    printf("Enter second number :");
    scanf("%d",&n2);
    printf("%d",addition(n1,n2));
    return 0;
}