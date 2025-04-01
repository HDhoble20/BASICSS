#include<stdio.h>
int main(){
    int sum,num,a,b,c,d,e;
    printf("Enter a five digit number:-");
    scanf("%d",&num);
     e=num%10;
     d=(num/10)%10;
     c=(num/100)%10;
     b=(num/1000)%10;
     a=(num/10000);
     sum=a+b+c+d+e;
     printf("\nSum of the given five digits = %d",sum);
}
