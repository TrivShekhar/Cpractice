#include<stdio.h>
#include<stdlib.h>
void main()
{
    int count=0;
    char *p,*temp,c;
    p=malloc(20);
    printf("Enter the string\n");
    gets(p);
    printf("Enter the character to be counted\n");
    c=getchar();
    temp=p;
    while(*temp!='\0'){
        if(*temp==c){
        count++;
        }
        temp++;
    }
    printf("The char %c occurs %d times in string %s",c,count,p);
}