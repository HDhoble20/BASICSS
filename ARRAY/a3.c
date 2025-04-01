#include<stdio.h>
void negN (int A[],int size)
{
   for (int  i = 0; i < size; i++)
  {
    printf("index: %d  Element: %d  Address: %d\n",i,A[i],&A[i]);
  }
     
}
void negativeN(int A[],int size)
{
  
 for (int i = 0; i < size; i++)
 {
   if (A[i]<0)
   {
    printf("negative element is%d",A[i]);
   }
 }

}
int main()
{
int A[100],size;
 printf("Enter the size of array:");
 scanf("%d",&size);
 for (int i = 0; i <size; i++)
 {
    printf("Enter the number:\n");
    scanf("%d",&A[i]);
 }
negN(A,size);
negativeN(A,size);

}  

