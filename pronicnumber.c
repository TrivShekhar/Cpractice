#include<stdio.h>
void main()
{
    int n,i,ispronic=0;
    printf("Enter the Number To check if its pronic");
    scanf("%d",&n);
    for(i=0;i<=n/2;i++)
    {
        if(i*(i+1)==n)
        {
            ispronic=1;
            break;
        }
    } 
    if(ispronic)
    {
        printf("The Number %d is pronic",n);
    }
    else
    {
        printf("The Number %d is not pronic",n);
    }
}