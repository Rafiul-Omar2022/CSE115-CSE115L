//Home task
#include<stdio.h>

int main(){

    int a, b, temp;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    //value swapping using temp variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping, a:%d b:%d", a, b);

    return 0;
}
