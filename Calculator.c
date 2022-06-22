#include<stdio.h>
#include"Maths.h"
void main(){
    int a,b;
    char c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("For \n Sum a \n Sub s \n Mul m \n Div d \n Rem r");
    scanf(" %c",&c);
    switch(c){
        case 'a':
            printf("%d",sum(a,b));
            break;
        case 's':
            printf("%d",sub(a,b));
            break;
        case 'm':
            printf("%d",mul(a,b));
            break;
        case 'd':
            printf("%d",div(a,b));
            break;
        case 'r':
            printf("%d",rem(a,b));
            break;
        default:
            printf("Invalid input");
    }

}