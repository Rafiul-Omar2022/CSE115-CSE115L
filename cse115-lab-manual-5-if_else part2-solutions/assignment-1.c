//assignment-1
#include<stdio.h>

int main(){

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    switch((year%4==0 && year%100!=0) || (year%400==0)){
        case 1:
            printf("Leap year");
            break;
        case 0:
            printf("Not a leap year");
            break;
    }
    return 0;
}
