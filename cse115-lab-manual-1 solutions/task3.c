#include<stdio.h>

int main(){

    float c, f;
    printf("Enter celsius: ");
    scanf("%f", &c);

    f = (c * (9.0/5.0)) + 32.0; // fraction .0 for converting to floating value

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);

    return 0;
}
