#include<stdio.h>
int main(){
    int start,end;
    printf("Enter the value of start:-");
    scanf("%d",&start);
     printf("Enter the value of end:-");
    scanf("%d",&end);
    while (start<=end)
    {
       printf("%d\n",start);
        start=start+1;
    }
    return 0;
    


}