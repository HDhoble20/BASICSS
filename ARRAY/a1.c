#include<stdio.h>

int main()
{
    //Array index always start with 0
    int A[5]={11,22,33,44,55};    //member initialization list....
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&A[i]);
    }
    
    
    for (int i = 0; i < 5; i++)
    {
        printf("Index: i %d Element %d ADD %d \n",i,A[i],&A[i]);
    }
 return 0;   
}