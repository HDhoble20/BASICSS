#include<stdio.h>
int minN(int A[],int size)
{
  int min;
   min=A[0];
    for(int i=1; i<size; i++)
    {
         if(min> A[i])
         {
		       min=A[i];
         }   
    }
    return min;
}
int maxN(int A[],int size)
{
    int max;
    max=A[0];
     for(int i=1; i<size; i++)
    {
         if(max< A[i])
         {
		       max=A[i];
         }   
    }
    return max;
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
int minimum=minN(A,size);
  printf("minimum of array is : %d\n",minimum);
int maximum=maxN(A,size);
   printf("Maximun of array is %d\n",maximum);


 }
  

 

