//assignment-2
#include<stdio.h>

int main(){

    int amount, count, r1, r2, r3, r4, r5, r6, r7, r8;
    printf("Enter amount: ");
    scanf("%d", &amount);

    r1 = amount / 500;
    count = amount % 500;

    r2 = count / 100;
    count = count % 100;

    r3 = count / 50;
    count = count % 50;

    r4 = count / 20;
    count = count % 20;

    r5 = count / 10;
    count = count % 10;

    r6 = count / 5;
    count = count % 5;

    r7 = count / 2;
    count = count % 2;

    r8 = count / 1;
    count = count % 1;


    printf("500:%d\n", r1);
    printf("100:%d\n", r2);
    printf("50:%d\n", r3);
    printf("20:%d\n", r4);
    printf("10:%d\n", r5);
    printf("5:%d\n", r6);
    printf("2:%d\n", r7);
    printf("1:%d\n", r8);

    return 0;
}
