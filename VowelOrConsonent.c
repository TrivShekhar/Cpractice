#include<stdio.h>
char toupper(char ch);
char toupper(char ch){
    if(ch>='a'&&ch<='z'){
        ch=ch-'a'+'A';
    }
    else{
        printf("\nInvalid Input");
    }
    return ch;
}
void main()
{
    char ch,c;
    printf("Enter the character\n");
    scanf("%c",&c);
    ch=toupper(c);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a consonant",ch);
    }

}