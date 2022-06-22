#include<stdio.h>
void main()
{
    float km,m,cm,mm,inch,feet;
    printf("Enter the distance in km: ");
    scanf("%f",&km);
    //convert Km to m
    m=km*1000;
    //convert Km to cm
    cm=km*100000;
    //convert Km to mm
    mm=km*1000000;
    //Convert Km to inch
    inch=km*39370.1;
    //Convert Km to feet
    feet=km*3280.84;    
    printf("\nDistance in m: %.2f",m);
    printf("\nDistance in cm: %.2f",cm);
    printf("\nDistance in mm: %.2f",mm);
    printf("\nDistance in inch: %.2f",inch);
    printf("\nDistance in feet: %.2f",feet);
}