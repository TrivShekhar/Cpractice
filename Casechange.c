#include<stdio.h>
void uppercase(char*);
void lowercase(char*); 
void main(){
    char ch[100],*p,temp[100],c;
    printf("Enter the string\n");
    scanf("%s",&ch);
    uppercase(ch);
    printf("For uppercase string: Enter U\nFor lowercase string: Enter L");
    scanf(" %c",&c);
    switch (c)
    {
        case 'U':
            uppercase(ch);
            printf("%s",ch);
            break;
        case 'L':
            lowercase(ch);
            printf("%s",ch);
            break;
        default:
            printf("Invalid input");
            break;
    }
}
void uppercase(char* p ){

    while(*p!='\0')
    {
        if(*p>='a'&&*p<='z')
        {
            *p=*p-32;
        }
        p++;
    }

}

void lowercase(char* p ){

    while(*p!='\0')
    {
        if(*p>='A'&&*p<='Z')
        {
            *p=*p+32;
        }
        p++;
    }
}