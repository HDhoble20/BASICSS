#include<stdio.h>
int main(){
    int n,revN=0,i,originalN;
    printf("Enter the number:--");
    scanf("%d",&n);
    originalN=n;
    while (n!=0)
    {
        i=n%10;
        revN=revN*10+i;
        n=n/10;
    }
    if (originalN==revN)
    {
        printf("%d is palindrome\n",originalN);
    }
    else
    {
        printf("%d is not palindrome",originalN);
    }
    return 0;
}
    
    
    
