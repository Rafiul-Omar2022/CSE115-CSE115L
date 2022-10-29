//exe-2
#include<stdio.h>

int main(){

    float a, b;
    printf("Enter two numbers with spaces a b: ");
    scanf("%f %f", &a, &b);

    switch(a>b){
        case 1:
            printf("%.2f is maximum",a );
            break;
        case 0:
            printf("%.2f is minimum", b);
            break;
    }

    return 0;
}
