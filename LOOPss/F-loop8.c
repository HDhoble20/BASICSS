#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number:--");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i%2==1)
        {
           printf("%d\n",i);
           sum=sum+i;   
        }
        
        
    }
    printf("Sum is:--%d",sum);
    return 0;

}