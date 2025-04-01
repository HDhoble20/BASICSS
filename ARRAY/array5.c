#include<stdio.h>
void negativeElement(int arr[],int n)
{
    int count=0;
 for (int i = 0; i<n; i++)
 {
    if (arr[i]<0)
    {
        count++;
    }
    
 }
 printf("Count of negative elemnt is %d",count);
}
int main()
{
    int arr[100],n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements in array:");
        scanf("%d",&arr[i]);
    }
    
    negativeElement(arr,n);
}