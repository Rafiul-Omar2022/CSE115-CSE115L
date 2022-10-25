//homework7
#include<stdio.h>

int main(){

    int n, sum;
    printf("Enter n of 1^2+2^2+3^2+.....+n^2: ");
    scanf("%d", &n);

    if(n > 0){
        sum = (n * (n+1) * (2*n+1)) / 6;
        printf("Sum of nth number is : %d\n", sum);
    }
    else
        printf("N cant be negative\n");

    return 0;
}
