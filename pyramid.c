#include<stdio.h>
int main(){
    int i, j,n;
    printf("Enter the rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            printf(" ");
        }
        
        for (j = i; j != 2*n-1; ++j)
        {
            printf("* ");
           
            
        }
         printf("\n");
     
    }
        return 0;   
    }
    

