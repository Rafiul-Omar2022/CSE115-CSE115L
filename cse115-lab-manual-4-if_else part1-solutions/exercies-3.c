#include<stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
//4, 6, 8, 12, 14, 15, 16, 25 valid
// 1, 3, 7, 9, 10, 20, invalid

    if(num%2==0 && num%5!= 0)
        printf("vaild");
    else if(num%5==0 && num%2!= 0)
        printf("Vaild");
    else if(num%2== 0 && num%5 == 0)
        printf("Invaild");
    else
        printf("Invalid");
    return 0;
}
