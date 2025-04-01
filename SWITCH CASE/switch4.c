#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the first number...\n");
    scanf("%d",&x);

    printf("Enter the second number...\n");
    scanf("%d",&y);

    switch (x<y)
    {
    case 0 : 
            printf("%d is greater",x);
        break;
    case 1 : 
              printf("%d is greater",y);
        break;
    
 
    }
}