//exe-4
#include<stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%5==0 && num%11 !=0)
        printf("multiple only 5");
    else if(num%5!=0 && num%11==0)
        printf("multiple only 11");
    else if(num%5==0 && num%11==0)
        printf("multiple both 5 and 11");
    else
        printf("not multiple both 5 and 11");

    return 0;
}
