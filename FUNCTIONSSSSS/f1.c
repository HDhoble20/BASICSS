#include<stdio.h>
int sumOfeven(int s, int e)
{    int sum=0;
   for (int i = s; i <= e; i++)
   {
     if (i%2==0)
     {
        printf("%d\n",i);
        sum=sum+i;
     }
     
   }
   return sum;
   
}
int sumOfodd(int s, int e)
{
     int sum=0;
   for (int i = s; i <= e; i++)
   {
     if (i%2==1)
     {
        printf("%d\n",i);
        sum=sum+i;
     }
     
   }
   return sum;
   
}
main()
{
    int start,end;
    printf("Enter the number from uhh want:");
    scanf("%d",&start);
    printf("Enter the number till uhh want:");
    scanf("%d",&end);
    int addE=sumOfeven(start,end);
    printf("ADDITION OF EVEN NUMBER IS :-%d\n",addE);
    int addO=sumOfodd(start,end);
    printf("ADDITION OF ODD NUMBER IS :-%d\n",addO);
}
