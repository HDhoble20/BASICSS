#include<stdio.h>
void countEvenOdd (int arr[],int n)
{   
   int x=0,y=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
        
    }
    printf("count of  even elements is %d\n",x);
    printf("count of  odd elements is %d\n",y);
}
int main()
{
    int arr[100],n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elemenet of the array: ");
        scanf("%d",&arr[i]);
    }
    countEvenOdd(arr,n);
    

}