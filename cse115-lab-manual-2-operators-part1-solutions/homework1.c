//homework1
#include<stdio.h>
#include<math.h>

int main(){

    float x, y;

    printf("Enter a number: ");
    scanf("%f", &x);

    y = (5*pow(x, 3)) - (4*pow(x, 2)) + sqrt(x)+ 3;
    printf("%.2f", y);

    return 0;
}
