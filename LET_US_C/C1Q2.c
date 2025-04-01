#include<stdio.h>
  int main() {
  float distance,meter,feet,inches,cm;
  printf("Enter the distance:----");
  scanf("%f",&distance);
  meter=distance*1000;
  feet=distance*3280.84;
  inches=distance*39370.1;
  cm=distance*100000;

  printf("%.1f km to meter is:----    %.1fm \n",distance,meter);
  printf("%.1f km to feet is:----     %.1fft \n",distance,feet);
  printf("%.1f km to inches is:----   %.1finch\n ",distance,inches);
  printf("%.1f km to cm is:----       %.1fcm \n",distance,cm);
return 0;





  }