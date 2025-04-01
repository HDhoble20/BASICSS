#include<stdio.h>
int main(){
    int  num,a,b,c,d,e,reverse;
    printf("Enter the number=");
    scanf("%d",&num);

       a=(num/10000);
       b=(num/1000)%10;
       c=(num/100)%10;
       d=(num/10)%10;
       e=num%10;
     reverse=10000*e+1000*d+100*c+10*b+a;
     printf("Reverse number is %d",reverse);
}