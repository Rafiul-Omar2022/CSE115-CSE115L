#include<stdio.h>

int main(){

    int num_1, num_2;
    //First input
    printf("Insert first number: ");
    scanf("%d", &num_1);
    //second input
    printf("Insert second number: ");
    scanf("%d", &num_2);
    //showing results
    printf("Sum = %d\n", num_1 + num_2);
    printf("Product = %d\n", num_1 * num_2 );
    printf("Difference = %d\n", num_1 - num_2);
    printf("Quotient = %d\n", num_1 / num_2);
    printf("Remainder = %d\n", num_1 % num_2);

    return 0;
}
