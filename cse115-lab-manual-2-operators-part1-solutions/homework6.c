//homework6
#include<stdio.h>

int main(){

    int n, sum;
    printf("Enter n of 1+2+3+.....+n: ");
    scanf("%d", &n);

    if(n > 0){
        sum = (n * (n+1)) / 2;
        printf("Sum of nth number is : %d\n", sum);
    }
    else
        printf("N cant be negative\n");

    return 0;
}
