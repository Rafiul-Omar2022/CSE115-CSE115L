//assignment-4

#include<stdio.h>

int main(){

    float num, i;
    printf("Enter a number : ");
    scanf("%f", &num);

    i = (int)num;
    if(num-i>0)
        printf("has fractional ");
    else
        printf("no fractional ");



    return 0;
}
