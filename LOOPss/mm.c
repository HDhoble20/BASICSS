#include<stdio.h>
int main(){
    int firstD,lastD,n;
    printf("Enter the number:");
    scanf("%d",&n);
    lastD=n%10;
    for (int n=1; n>=10; n++)
    {
        n=n/10;
        
    }
    firstD=n;

    
    printf("first digit is %d and last digit is %d",firstD,lastD);
    return 0;
} 
