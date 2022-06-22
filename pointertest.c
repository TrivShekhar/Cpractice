#include<stdio.h>
void main(){
    int c=5;
    char *p = &c;
    printf("%d\n",sizeof(char));
    printf("%d\n",*p);
}