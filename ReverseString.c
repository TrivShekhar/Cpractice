#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int i,j;
    char temp;
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}   //end of reverse
void main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    reverse(str);
    printf("%s",str);
}