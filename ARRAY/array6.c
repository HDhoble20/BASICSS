#include<stdio.h>
void copyarray(int arr1[],int arr2[],int n)
{
    printf("original array is : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n",arr1[i]);
  }
  printf("Copied array is: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n",arr2[i]);
  }
  
  
}
int main()
{
    int n;
    int arr1[100];
    int arr2[n];
    printf("Enter the size of array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements in array");
        scanf("%d",&arr1[i]);
        arr1[i]=arr2[i];
    }
    copyarray(arr1,arr2,n);
    
}