//assignment-2
#include<stdio.h>

int main(){

    float a, b, c;
    const float angle = 180;

    printf("Enter three angles  of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if((a+b+c) == angle){
        printf("valid");
    }else
        printf("Invalid");

    return 0;
}
