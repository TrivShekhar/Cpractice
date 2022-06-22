#include<stdio.h>
void main()
{
    int percentage;
    int cgp;
    printf("Enter percentage\n");
    scanf("%d",&percentage);
    cgp=percentage/10;
    switch(cgp)
    {
        case 10:
        case 9:
        case 8:
            printf("Honours\n");
            break;
        case 7:
        case 6:
            printf("First Division \n");
            break;
        case 5:
        case 4:
            printf("Second Division\n");
            break;
        case 3:
            printf("Third Division\n");
            break;
        case 2:
        case 1:
        case 0:
            printf("Fail\n");
            break;
        default:
            printf("Exam percentage can not be negative or more than 100");
            break;
    }
    }
