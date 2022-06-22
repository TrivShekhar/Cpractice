#include<stdio.h>
#include<math.h>
void main()
{
int n,num,temp,i=0,isarm=0;
printf("Enter a number:");
scanf("%d",&num);
temp=num;
n=num;
while(temp!=0)
{
    i++;
    temp=temp/10;
}
while(n!=0){
    temp=n%10;
    isarm=isarm+floor(pow(temp,i));
    n=n/10;
}

if(isarm==num)
    printf("%d is an Armstrong number",num);
else
    printf("%d is not an Armstrong number",num);
}
