#include<stdio.h>
int sumOfallElement(int arr[],int n,int sum)
{
    printf("All array elements  are :\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n",arr[i]);
    sum=sum+arr[i];
  }
  printf(" sum of all array element is %d",sum);
  return sum;
  
}
int main()
{
    int arr[100],n,sum=0;
    printf("Enter the siz of the array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array elemment:");
        scanf("%d",&arr[i]);
    }
 sumOfallElement(arr,n,sum);
    
}