//ex-5
#include<stdio.h>

int main(){

    //@= s/r;
    float radius, arclength, angle;
    printf("Enter radius and arc length with spaces: ");
    scanf("%f %f",&radius, &arclength);

    angle = arclength/ radius;
    printf("Angle %.2f", angle);

    return 0;
}
