#include<stdio.h>
void uppercase(char arr[])
{ int i;
  for (int i = 0; arr[i]!=0; i++)
  {
    if (arr[i]>='A' && arr[i]<='Z')
    {
        arr[i]=arr[i] + 32;
    }
    
  }
  printf("lowercase  string is %s\n",arr);
  
}
int main()
{
    char arr[100];
    printf("Enter the name: ");
    gets(arr);
    uppercase(arr);
}