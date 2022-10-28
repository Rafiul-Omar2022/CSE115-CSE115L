//assignment-5
#include<stdio.h>

int main(){

    float r, a, diameter, diagonal;
    printf("Enter radius of circle and side of squre: ");
    scanf("%f %f", &r, &a);

    diameter = 2 * r;
    diagonal = 1.41 * a;
    if(diameter == diagonal)
        printf("squre can be place in circle");
    else
        printf("squre cant be place in circle");

    return 0;
}
