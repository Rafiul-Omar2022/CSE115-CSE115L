//ex-2
#include<stdio.h>

int main(){

    int m, n;
    printf("Enter two integers with spaces m n: ");
    scanf("%d %d", &m, &n);
    printf("The value of m*2n is = %d\n", m<<n);
    printf("The value of m/2n is = %d\n", m>>n);

    return 0;
}
