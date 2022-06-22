#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
struct Employee{
    char name[20];
    int id;
    struct Date dob;
};
void main()
{
    struct Employee e[50];
    int n,i;
    printf("Enter the number of the employees\n");
    scanf("%d",&n);
    printf("Enter the name,id and date of birth of the employees\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d",e[i].name,&e[i].id,&e[i].dob.day,&e[i].dob.month);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t%d\n",e[i].name,e[i].id,e[i].dob.day,e[i].dob.month);
    }

}