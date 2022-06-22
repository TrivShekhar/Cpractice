#include<stdio.h>
void main()
{ 
    //Program to print the size of different data types
    int a=10;
    char b='a';
    float c=10.5;
    double d=10.5;
    printf("The size of \n int: %d \n char :%d \n float :%d \n double :%d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
}