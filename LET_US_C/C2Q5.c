#include<stdio.h>
#include<math.h>

int main()
{
    float lat1, lat2, lon1, lon2, D;
    const float PI = 3.141592;

    printf("Enter latitude(L1, L2)\n");
    scanf("%f%f", &lat1, &lat2);

    printf("Enter longitude(G1, G2)\n");
    scanf("%f%f", &lon1, &lon2);
  
    /* Convert Degrees To Radian */    lat1 = lat1 * ( PI / 180.0 );
    lat2 = lat2 * ( PI / 180.0 );
    lon1 = lon1 * ( PI / 180.0 );
    lon2 = lon2 * ( PI / 180.0 );

    D = 3963 * acos( sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1) );

    printf("Distance in nautical miles is %f\n", D);

    return 0;
}