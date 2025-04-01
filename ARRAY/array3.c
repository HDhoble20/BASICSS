#include<stdio.h>
int miNofArray(int arr[],int n)
{
  int min;
  min=arr[0];
  for (int i = 0; i < n; i++)
  {
    if (min>arr[i])
    {
        min=arr[i];
    }
    
  }
  return min;
}
int maXofArray(int arr[],int n)
{
    int max;
  max=arr[0];
  for (int i = 0; i < n; i++)
  {
    if (max<arr[i])
    {
        max=arr[i];
    }
    
  }
  return max;
}


int main()
{
    int arr[100],n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element in array: ");
        scanf("%d",&arr[i]);
    }
    int minimun=miNofArray(arr,n);
    printf("Minimum of array is %d\n",minimun);
    int maximum=maXofArray(arr,n);
    printf("Maximum of array is %d",maximum);
}