#include<stdio.h>
int main(){
    int n,lastDigit,firstDigit,sum=0;
    printf("Enter the number:-");
    scanf("%d",&n);
    lastDigit=n%10;
    while (n>=10)
    {
      n=n/10;
    }
    firstDigit=n;
    sum=firstDigit+lastDigit;
    printf("Sum of first digit and last digit is: %d",sum);
    return 0;
    
}