#include<stdio.h>

void evenOddN(int A[],int size)
{
  for (int  i = 0; i < size; i++)
  {
    printf("index: %d  Element: %d  Address: %d\n",i,A[i],&A[i]);
  }
  
}
void evenN(int A[],int size)
{
  int x=0,y=0;
  printf("Array elements:\n");
  for (int i = 0; i < size; i++)
  {
    if (A[i]%2==0)
    {
      x++;
    }
    else
    {
     y++;
    }
  }
  printf("all even elements : %d\n",x);
  printf("all odd element is %d\n",y);
}
 
 main()
{
int A[10],size;
 printf("Enter the size of array:");
 scanf("%d",&size);
 for (int i = 0; i < size; i++)
 {
    printf("Enter the number:\n");
    scanf("%d",&A[i]);
 }
evenOddN(A,size);
evenN(A,size);


 }
  

 

