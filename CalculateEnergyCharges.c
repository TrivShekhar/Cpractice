#include<stdio.h>
void main()
{
    int unit;
    float energy_charges;
    printf("Enter the unit consumed by the customer:");
    scanf("%d",&unit);
    if(unit<=200)
    {
        energy_charges=unit*0.5;
    }
    else if(unit>200 && unit<=400)
    {
        energy_charges=100+(unit-200)*0.65;
    }
    else if(unit>400 && unit<=600)
    {
        energy_charges=230+(unit-400)*0.80;
    }
    else
    {
        energy_charges=390+(unit-600);
    }
    printf("The energy charges are:%f",energy_charges);
}