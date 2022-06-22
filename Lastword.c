#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isadigit(char st[]){
    int flag=1,i;
    for(i=0;i<strlen(st);i++){
        if(st[i]<'0' || st[i]>'9'){
            flag=0;
            break;
        }
    }
    return flag;
}
void main(){
    char str[100],*st,*temp;
    int size,i=0,n,j;
    puts("Enter any string");
    gets(str);
    n=strlen(str);
    if(n==0)
        printf("There is no word in the sentence");
    else{
    for(i=n;i>=0;i--){
        if(str[i]==' '){
            break;
        }
    }
    st=malloc(n-i+1);
    temp=st;
    j=i+1;
    while(j<=n){
        *temp=str[j];
        temp++;
        j++;
    }
    *temp='\0';
    puts(st);
    puts(temp);
    if(isadigit(st)){
        printf("this is a digit");   
    }
    }
}