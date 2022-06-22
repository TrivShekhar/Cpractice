#include<stdio.h>
int reverse(int a,int temp){
    if(a==0){
        return temp; 
    }
    else{
        temp = 10*temp+ a%10;
        return reverse(a/10,temp);
    }

}
void main(){
    int a;
    printf("Enter a number to check palindrome");
    scanf("%d",&a);
    if(a==reverse(a,0)){
        printf("Palindrome");
    }
    
    else{
        printf("Not Palindrome");
    }

}