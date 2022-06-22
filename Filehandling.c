#include<stdio.h>
#include<String.h>
void main(){
    FILE *fp;
    char str[10],str2[10];
    fp=fopen("Test.txt","r");
    fscanf(fp,"%s%s",str,str2);
    fclose(fp);
    printf("%s%s",str,str2);
    
}