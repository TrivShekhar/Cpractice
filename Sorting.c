#include<stdio.h>
void main()
{
    int a[5],i,j,temp;
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            
            printf("%d\t",a[i],a[j]);
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            printf("%d\t\n",a[i],a[j]);
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}