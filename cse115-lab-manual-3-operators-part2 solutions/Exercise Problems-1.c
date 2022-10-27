//ex-1
#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n & 1 == 0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}

