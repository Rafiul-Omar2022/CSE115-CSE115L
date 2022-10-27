//hw-3
#include<stdio.h>
#include<math.h>

int main(){

    float b, h, hypo;
    printf("Enter the lengths of base and height of a right angle triangle with spaces: ");
    scanf("%f %f", &b, &h);

    hypo = sqrt(pow(b, 2) + pow(h, 2));

    printf("Hypotenuse %.2f", hypo);

    return 0;
}
