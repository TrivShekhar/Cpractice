#include<stdio.h>
#include<stdlib.h>
void main()
{
    int len=0;
    char *p,*temp;
    p=malloc(20);
    printf("Enter the string\n");
    scanf("%s",p);
    temp=p;
    while(*temp++!='\0'){
        len++;
    }
    printf("The length of string %s is %d",p,len);
}