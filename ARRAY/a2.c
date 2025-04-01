#include<stdio.h>
int sumOfArray(int A[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    sum=sum+A[i];
    return sum;
}
int main()
{
int A[5],size;
 printf("Enter the size of array:");
 scanf("%d",&size);
 for (int i = 0; i < size; i++)
 {
    printf("Enter the number:\n");
    scanf("%d",&A[i]);
 }
 int add=sumOfArray(A,size);
 printf("sum of array is %d",add);
 
}  
