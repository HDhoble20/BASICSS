#include<stdio.h>
void revArray(int A[],int n)
{
 printf("*****************************\n");
 printf("ORIGINAL ARRAY IS:--");
 for (int i = 0; i < n; i++)
 {
    printf("%d",A[i]);
 }
 printf("\nREVERSE ARRAY IS:--");
 for (int i =n-1; i>=0; i--)
 {
    printf("%d",A[i]);
 }
}
main()
{
  int A[100];
  int n;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  printf("Enter the array element\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&A[i]);
  }
 revArray(A,n);
}