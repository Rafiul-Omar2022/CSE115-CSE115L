//hw-2
#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){

    float r, h, vol, sur_area;
    printf("Enter radius and hight of a cone: ");
    scanf("%f %f", &r, &h);

    vol = (PI * pow(r, 2) * h) / 3;
    sur_area = PI * r * (r + (sqrt(pow(h, 2)+ pow(r, 2))));
    printf("Cone area = %.2f and cone volume = %.2f", sur_area, vol);

    return 0;
}
