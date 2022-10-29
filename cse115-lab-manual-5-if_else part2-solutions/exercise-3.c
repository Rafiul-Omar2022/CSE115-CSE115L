//exe-3
#include<stdio.h>

int main(){

    char ch;
    float num1, num2, cal;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator: ");
    scanf(" %c", &ch);

    switch(ch){
        case '+':
            cal = num1 + num2;
            printf("%.1f %c %.1f = %.1f", num1, ch, num2, cal);
            break;
        case '-':
            cal = num1 - num2;
            printf("%.1f %c %.1f = %.1f", num1, ch, num2, cal);
            break;
        case '*':
            cal = num1 * num2;
            printf("%.1f %c %.1f = %.1f", num1, ch, num2, cal);
            break;
        case '/':
            if(num2!=0){
                cal = num1 / num2;
                printf("%.1f %c %.1f = %.1f", num1, ch, num2, cal);
            }else
                printf("cant divided by 0");
            break;
        default:
            printf("Invalid syntex");

    }

    return 0;
}
