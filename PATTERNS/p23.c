#include<stdio.h>
int main(){
    int k;
    for (int i = 1; i <= 5; i++)
    {
             if (i%2==1)
             k=1;
             else
             k=2;
           
        for (int j = 1; j <= i; j++)
        {
         
                printf("%d",k);
                k=k+2;
            
            
        }
         printf("\n");    
    }
    return 0;
}