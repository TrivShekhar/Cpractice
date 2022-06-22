#include<stdio.h>
#include<ctype.h>
#define f5000plus .5
#define normal .2
void main()
{
    float balance,bonus=0;
    char gender;
    printf("Enter the gender of account holder");
    scanf("%c",&gender);
    printf("Enter the balance in account");
    scanf("%f",&balance);
    if(gender=='F')
    {
        if(balance>5000)
            {
            bonus =balance*.5;
            balance=balance+bonus;
            }
        else{
            bonus =balance*.2;
            balance=balance+bonus;
            }
            }
    else
        {
        bonus =balance*.2;
        balance=balance+bonus;   
        }
    printf("The new balance is %f",balance);
}