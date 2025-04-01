#include<stdio.h>
void countADS (char arr[])
{
    int i;
    int alpha=0,digit=0,specialC=0;
    for ( i = 0;arr[i]; i++)
    {
        if ((arr[i]>='a' && arr[i]<='z')||(arr[i]>='A' && arr[i]<='Z'))
        {
            alpha++;
        }
        else if (arr[i]>='0' && arr[i]<='9')
        {
            digit++;
        }
        else
        {
            specialC++;
        }
        
        
    }
    printf("ALPHABETS COUNT = %d\n",alpha);
    printf("DIGIT  COUNT = %d\n",digit);
    printf("SPECIAL CHAR COUNT = %d\n",specialC);

}
int main()
{
    int arr[100];
    printf("enter the string element: \n");
    gets(arr);
    countADS(arr);
}
