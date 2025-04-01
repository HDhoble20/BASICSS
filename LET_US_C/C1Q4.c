#include<stdio.h>
int main()
{
    float farheniteD,centigradeD;
    printf("Enter the temperature:- ");
    scanf("%f",&farheniteD);
    centigradeD=(farheniteD-32)*0.5556;
    printf("Temperature in centigrade degree is:--%.2f",centigradeD);

}