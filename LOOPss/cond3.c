#include<stdio.h>
int main(){
    int year;
    printf("enter the year\n");
    scanf("%d",&year);

 (year % 4==0&&year%100!=0)? printf("Year is leap year") : (year % 400==0) ? printf("Year is  leap year")  : printf("year is common year");
}