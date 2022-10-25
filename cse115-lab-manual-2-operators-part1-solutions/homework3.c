//homework3
#include<stdio.h>
#include<math.h>

#define PI 3.146

int main(){

    float cube_side, vol_cube, vol_cylinder, cy_h, cy_r;
    //cube volume
    printf("Enter cube_side lenght: ");
    scanf("%f", &cube_side);

    vol_cube = pow(cube_side, 3);

    //cylinder volume
    printf("Enter cylinder hight and radius separated spaces: ");
    scanf("%f %f", &cy_h, &cy_r);

    vol_cylinder = PI * cy_r * cy_h;


    //showing cube and cylinder volumes
    printf("Volume of a cube = %.3f\n", vol_cube);
    printf("Volume of a cylinder = %.3f\n", vol_cylinder);

    return 0;
}
