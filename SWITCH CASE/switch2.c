#include<stdio.h>
int main()
{
 int month;
 printf("Enter the month: ");
 scanf("%d",&month);
 switch (month)
 {
 case 1 :
  
 case 3 : 
 case 5 :
 case 7 :
 case 8 :
 case 10 :
 case 12 :
    printf("31 days in Month");
    break; 
 case 2 :
    printf("28 daays in month");
    break;
 case 4 :
 case 6 :
 case 9 :
 case 11:
     printf("30 days in months");
     break;  
 default:
     printf("Enter from 1 to 12");
    break;
 }   
}