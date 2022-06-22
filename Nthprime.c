#include<stdio.h>
#include<math.h>
void main()
{
    int n=10,i=1,j,num=1,flag=1;
    while(i<=n)
    {
      for(j=1;j<=num;j++)
       {
            if(num%j==0 && j!=1 && j!=num)
            {
            flag=0;
            break;
            }
       }
       if(flag==1)
        {
            printf("%d\n",num);
            i++;    
        }
        num++;
        flag=1;
   
    }
}