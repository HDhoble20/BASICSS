#include<stdio.h>
int main(){
    int n=100,i=1;
    printf("Enter the all even number till 100 is %d:",n);
    
    while (i<=n)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
        
    }
    return 0;
    
}