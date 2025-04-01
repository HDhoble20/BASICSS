#include <stdio.h>
   int main(){
    float retailPrice;
    puts("enter retail price:");
    scanf("%f", &retailPrice);
    float payableAmt;
  if    (retailPrice>=500)
     {
        puts("eligible for discount");
        payableAmt=retailPrice*0.9;
     }
else
     {
        puts("not eligible for discount");
        payableAmt=retailPrice;
     } 

     printf("discount availed : Rs %.1f\n", retailPrice-payableAmt);
     printf("Net payable amt :Rs %.1f\n",payableAmt);
    return 0;


   }
