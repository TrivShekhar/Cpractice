#include<stdio.h>
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
void main(){
    int n,i;
    printf("Enter the limit to print fibonacci series");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n",fib(i));
    }
}