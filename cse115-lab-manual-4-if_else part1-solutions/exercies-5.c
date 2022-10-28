//exe-5
#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, d, e;
    float x1, x2;
    scanf("%f %f %f", &a, &b, &c);

    e = pow(b, 2)-(4*a*c);

    if(e>=0){
        d = sqrt(e);
        x1 = ((-b) + d)/(2*a);
        x2 = ((-b) - d)/(2*a);

        printf("The value is x1 = %.3f and x2 = %.3f", x1, x2);
    }
    else
        printf("Complex root");

    return 0;
}
