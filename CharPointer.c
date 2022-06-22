#include<stdio.h>
#include<stdlib.h>
void main(){
    int l=0;
    char *p,*temp;
    p=malloc(50);
    scanf("%s",p);
    temp=p;
    while(*temp!='\0')
 {
     temp++;
     l++;
 }   
 printf("The length of string %s is %d",p,l);
}