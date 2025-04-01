#include<stdio.h>
void rotateArray(int A[], int n,int d)
{
 int j;
 for (j = 0; j < d; j++)
 {
    int i;
    int x=A[0];
   for ( i = 0; i < n-1; i++)
   {
    A[i]=A[i+1];
   }
   A[i]=x;
 }
  for (int i = 0; i < n; i++)
 {
    printf("%d",A[i]);
 }

 
}

main()
{
    int n,d;
    int A[100];
    printf("Enter the size of an array:--\n");
    scanf("%d",&n);
    printf("Enter the array element:--\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the index from you want to rotate\n");
    scanf("%d",&d);
    rotateArray(A,n,d);
    
}
