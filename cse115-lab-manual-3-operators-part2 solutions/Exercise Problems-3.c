//ex-3
#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){


    float radius, vol;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    vol  = (4.0/3.0) * PI * pow(radius, 3);
    printf("Volume of of a sphere : %.3f", vol);

    return 0;
}
