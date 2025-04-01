#include<stdio.h>
void displayArray(int A1[],int A2 [],int n1,int n2)
{
    printf("First array element are...\n");
   for (int i = 0; i < n1; i++)
    {
        printf("%d",A1[i]);
    }
    printf("\nSecond array element are...\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%d",A2[i]);
    }
    printf("\n");
    
}
void mergeArray(int A1 [],int A2 [], int A3 [],int n1,int n2, int n3)
{
    
  for (int i = 0; i < n1; i++)
    {
        A3[i]=A1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        A3[i+n1]=A2[i];
    }
    printf("Merge array is\n");
     for (int i = 0; i < n3; i++)
    {
        printf(" %d ",A3[i]);
    }
    
}


main()
{
    int n1,n2,n3;
    int A1[100];
    int A2[100];
    int A3[100];
    printf("Enter the size of the first array:-");
    scanf("%d",&n1);
    printf("Enter the element of first arraay\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&A1[i]);
    }
    printf("Enter the size of the second array:-");
    scanf("%d",&n2);
    printf("Enter the element of second array\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&A2[i]);
    }
    n3=n1+n2;
    displayArray(A1,A2,n1,n2);
    mergeArray(A1,A2,A3,n1,n2,n3);
}