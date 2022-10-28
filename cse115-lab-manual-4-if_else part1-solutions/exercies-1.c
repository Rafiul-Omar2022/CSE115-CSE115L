//exe-1
#include<stdio.h>

int main(){

    int num;
    printf("Enter month number (1-12): ");
    scanf("%d", &num);

    if(num==1)
        printf("January number of days in month 31");
    else if(num==2)
        printf("February number of days in month 28");
    else if(num==3)
        printf("March number of days in month 31");
    else if(num==4)
        printf("April number of days in month 30");
    else if(num==5)
        printf("May number of days in month 31");
    else if(num==6)
        printf("June number of days in month 30");
    else if(num==7)
        printf("July number of days in month 31");
    else if(num==8)
        printf("August number of days in month 31");
    else if(num==9)
        printf("September number of days in month 30");
    else if(num==10)
        printf("October number of days in month 31");
    else if(num==11)
        printf("November number of days in month 30");
    else if(num==12)
        printf("December number of days in month 31");
    else
        printf("Invalid input");

    return 0;
}
