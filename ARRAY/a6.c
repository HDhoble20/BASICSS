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
  int n=0;
  printf("**********Array element***********\n");
  printf("The negative  array element is\n");
 for (int i = 0; i < size; i++)
 {
   if (A[i]<0)
   {
    printf("%d\n",A[i]);
    n++;
   }
 }
  printf("negative count of the elements in array is: %d",n);
}
main()
{
int A[100],size;
 printf("Enter the size of array:");
 scanf("%d",&size);
 for (int i = 0; i < size; i++)
 {
    printf("Enter the number:\n");
    scanf("%d",&A[i]);
 }
negN(A,size);
negativeN(A,size);

}  

