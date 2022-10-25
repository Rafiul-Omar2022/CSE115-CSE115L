//homework5
#include<stdio.h>

int main(){

    float f, c;
    printf("Celsius: ");
    scanf("%f", &c);

    f = (c * (9.0/5.0)) + 32;

    printf("Celsius = %.3f and its fahreheit %.3f", c, f);

    return 0;
}
