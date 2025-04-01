#include<stdio.h>
void uppercase(char arr[])
{ int i;
  for (int i = 0; arr[i]!=0; i++)
  {
    if (arr[i]>='a' && arr[i]<='z')
    {
        arr[i]=arr[i] - 32;
    }
    
  }
  printf("Uppercase string is %s",arr);
  
}
int main()
{
    char arr[100];
    printf("Enter the name: ");
    gets(arr);
    uppercase(arr);
}