#include<stdio.h>
void rotateArray (int A[],int size,int d)

{   
 for (int j = 0; j < d; j++)
 {
    
    int i;
  int x=A[0];
 for (i = 0; i < size-1; i++)
    {
        A[i]=A[i+1];
      
    }
    A[i]=x;
 }
 
 
}
void printRotateArray (int A[],int size)
{
    for ( int i = 0; i < size; i++)
    {
        printf("%d",A[i]);
    }
    
}
 



main()


{
    int A[100];
    int size;
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter the element in array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&A[i]);
    }
        int d;
    printf("Enter the  number to rotate\n");
    scanf("%d",&d);


    rotateArray(A,size,d);
    printRotateArray(A,size);
   
    
}