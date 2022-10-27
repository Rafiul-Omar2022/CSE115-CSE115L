//hw-1
#include<stdio.h>

int main(){

    /*
        ------a-------
      /  |            |
     c   h            d
    /    |            |
   /     |            |
    -----------b------
    */
    // area of trapezoid
    float a, b1, h1, b2, h2, area1, area2;
    printf("Enter base of trapezoid a: ");
    scanf("%f", &a);
    printf("Enter base trapezoid b: ");
    scanf("%f", &b1);
    printf("Enter hight trapezoid h: ");
    scanf("%f", &h1);

    area1 = ((a + b1) * h1) / 2;

    //area of parallelogram
    printf("Enter base of parallelogram: ");
    scanf("%f", &b2);
    printf("Enter base of hight: ");
    scanf("%f", &h2);

    area2 = b2 * h2;

    // all output
    printf("\n\nArea of trapezoid: %.2f\n\n", area1);
    printf("Area of parallelogram: %.2f\n", area2);

    return 0;
}
