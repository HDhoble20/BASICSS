#include<stdio.h>
int main(){
  
    
    for (int i = 1; i <= 5; i++)
    {   
        for (int k = 1; k < 6-i; k++)
        {
            printf(" ");
        }
        
        for(int j=1;j<=5;j++)
        {
           
        
          printf("*");

        }
    
    
       printf("\n");

    }
      
}
