//homework2
#include<stdio.h>
#include<math.h>
int main(){

    float a, b, c, d, x1, x2;
    printf("Enter a, b, c of an equation with spaces: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a!=0){

        d = sqrt(pow(b, 2) - (4*a*c));

        if(d>=0){
            x1 = ((-b) + (d))/(2*a);
            x2 = ((-b) - (d))/(2*a);

            printf("Roots x1 = %f, x2 = %f", x1, x2);
        }else{
            printf("Roots will be complex number");
        }

    }else
        printf("Not a quadratic equation. 'a' shouldn't be zero.");



    return 0;
}
