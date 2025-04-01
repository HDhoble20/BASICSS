#include<stdio.h>
int max(int x, int y)
{ 
 
 if (x>y)
 {
    printf("N1 is maximum");
 }
 else
 {
    printf("N2 is maximum");
 }
 
 return x;
 
}
int  min(int x, int y)
{ 
 
 if (x<y)
 {
    printf("N1 is minimum");
 }
 else
 {
    printf("N2 is minimum");
 }
 
 return x;
 
}
 main()
 {
int n1,n2;
printf("Enter the  first number:\n");
scanf("%d",&n1);
printf("Enter the  second number:\n");
scanf("%d",&n2);
int maximumN=max(n1,n2);
printf("%d\n",maximumN);
int minimumN=min(n1,n2);
printf("%d\n",minimumN);


}