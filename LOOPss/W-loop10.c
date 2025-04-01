#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter the all even number till:");
    scanf("%d",&n);
    
    while (i<=n)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
         
        }
        i++;
    }
    printf("sum of all even number from 1 to %d is %d ",n,sum);
   
        
    
    return 0;
    
}