#include<stdio.h>
int main(){
    int Maths,Eng,Mar,Hindi,History,aggregateM;
    float percentageM;
    printf("Enter marks in Maths:---");
    scanf("%d",&Maths);
     printf("Enter marks in Eng:---");
    scanf("%d",&Eng);
     printf("Enter marks in Mar:---");
    scanf("%d",&Mar);
     printf("Enter marks in Hindi:---");
    scanf("%d",&Hindi);
     printf("Enter marks in History:---");
    scanf("%d",&History);

    aggregateM=Maths+Eng+Mar+Hindi+History;
    percentageM=aggregateM/5;

    printf("Aggregate marks is:-- %d\n",aggregateM);
    printf("Percentage is:--%.1f",percentageM);
    return 0;
    

}