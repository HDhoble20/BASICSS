#include<stdio.h>
#include<math.h>
int main(){
    int x,y,degree;
    float r,phi,p;
    printf("Enter the coordinate points (x,y):");
    scanf("%d %d",&x ,&y);

    r=sqrt(x*x+y*y);

    phi= atan (y/x);

    printf("polar coordinate of (%d%d) is (%f%f)",x,y,r,phi);

    p=3.14;
    degree=phi*(180/p);
    printf("\n The polar coordinate in degree: (%f,%d)",r,degree);
    return 0;
}