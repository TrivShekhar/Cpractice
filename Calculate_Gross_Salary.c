
#include<stdio.h>
#define DA 0.40;
#define HRA 0.20;
void main()
{
    long int gs,bs;
    float da, hr;
    printf("Enter your Basic Salary \n");
    scanf("%ld",&bs);
    //Calculate DA
    da = bs*DA;
    //Calculate HRA
    hr = bs*HRA;
    //Calculate Gross Salary
    gs=bs+da+hr;
    printf("\nGross Salary is %ld",gs);
}