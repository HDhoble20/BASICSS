#include<stdio.h>
void  copyArray (int x[], int y[],int z[],int n1,int n2)
{ 
     printf("first array is:\n");
 for (int i = 0; i < n1; i++)
 {
    printf("%d\n",x[i]);
 }
 printf("second array is:\n");
 for (int i = 0; i < n2; i++)
 {
    printf("%d\n",y[i]);
 }
  printf("Merge array is\n");
  for (int i = 0; i < n1; i++)
  {
   z[i]=x[i];
   printf("%d ",z[i]);
  }
  for (int i = 0; i < n2; i++)
  {
   z[i]=y[i];
   printf("%d ",z[i]);
  }
}


 int main()
{   int n3;
  int A[5],n1=5;
  int B[5],n2=5;
  int C[n3];
  printf("Enter the size of first array:");
  scanf("%d",&n1);
  printf("Enter the size second array:");
  scanf("%d",&n2);
 
  printf("Enter the element in first array:");
  for (int i = 0; i < n1; i++)
  {
   scanf("%d",&A[i]);
  }
   printf("Enter the element in second array:");
  for (int i = 0; i < n2; i++)
  {
   scanf("%d",&B[i]);
  }

  
  
  
  copyArray(A,B,C,n1,n2);

}