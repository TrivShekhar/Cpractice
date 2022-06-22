#include<stdio.h>
void main(){
    char str[100];
    int i,numflag=0,upperflag=0,lowerflag=0,specialcharflag=0;
    printf("Enter the password string");
    gets(str);
    for(i=0;str[i]!=0;i++){
        if(str[i]>='0' && str[i]<='9'){
            numflag=1;
        }
        if(str[i]>='A' && str[i]<='Z'){
            upperflag=1;
        }
        if(str[i]>='a' && str[i]<='z'){
            lowerflag=1;
        }
        if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='('||str[i]==')'||str[i]=='-'||str[i]=='+')
        {
            specialcharflag=1;
        }
    }
    if(i>=7 && numflag && upperflag && lowerflag && specialcharflag){
        printf("Strong Password");
    }
    else{
        printf("Not Strong Passwoed");
    }
}