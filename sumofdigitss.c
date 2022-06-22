#include<stdio.h>
int main()
{
    int i,n,num;
    float sum=0,avg=0;
    printf("Enter number of numbers :");
    scanf("%d",&n);
    printf("Enter numbers :");
    for(i=0;i<n;i++)
    {
       scanf("%d",&num);
       sum+=num;
    }
    avg=sum/n;
    printf("Average :%f",avg);
    return 0;
}