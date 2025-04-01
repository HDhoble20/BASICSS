#include <stdio.h>
int main(){
    int x=0;
    int y=0;
    while (x<5)
    {
        x=x+1;
        y=y+x;
        printf("%i%i",x,y);
        x=x+1;
    }
    
}