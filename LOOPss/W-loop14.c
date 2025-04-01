#include<stdio.h>
int main(){
    int n,lastDigit,firstDigit;
    printf("Enter the number:-");
    scanf("%d",&n);
    lastDigit=n%10;
    while (n>=10)
    {
        n=n/10;
    }
    firstDigit=n;
    printf("First digit =%d and Last digit=%d\n\n",firstDigit,lastDigit);
    return 0;
    

}