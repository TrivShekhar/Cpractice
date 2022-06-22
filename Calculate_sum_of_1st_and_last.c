#include<stdio.h>
void main()
{
    int n,sum=0,r,temp;
    printf("Enter the number:");
    scanf("%d",&n);  
    temp=n;  
    while(temp!=0)
    {
       
        if(temp==n || temp<10)
        {
            r=temp%10;
            sum=sum+r;
        }
        temp=temp/10;
        
    }
    printf("Sum of first and last digit is:%d",sum);

}