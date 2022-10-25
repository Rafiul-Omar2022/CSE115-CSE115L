    //homework1
    #include<stdio.h>
    #include<math.h>
    
    int main(){
    
        float x, y;
    
        printf("Enter a number: ");
        scanf("%f", &x);
    
        y = (5*pow(x, 3)) - (4*pow(x, 2)) + sqrt(x)+ 3;
        printf("%.2f", y);
    
        return 0;
    }
    
    
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
    
    
    
    //homework3
    #include<stdio.h>
    #include<math.h>
    
    #define PI 3.146
    
    int main(){
    
        float cube_side, vol_cube, vol_cylinder, cy_h, cy_r;
        //cube volume
        printf("Enter cube_side lenght: ");
        scanf("%f", &cube_side);
    
        vol_cube = pow(cube_side, 3);
    
        //cylinder volume
        printf("Enter cylinder hight and radius separated spaces: ");
        scanf("%f %f", &cy_h, &cy_r);
    
        vol_cylinder = PI * cy_r * cy_h;
    
    
        //showing cube and cylinder volumes
        printf("Volume of a cube = %.3f\n", vol_cube);
        printf("Volume of a cylinder = %.3f\n", vol_cylinder);
    
        return 0;
    }
    
    
    //homework4
    #include<stdio.h>
    
    int main(){
    
        int x, y;
        printf("Enter two integers separated with spaces x, y: ");
        scanf("%d %d", &x, &y);
    
        if(y != 0){
            printf("x/y = %d/%d = %d\n",x , y, x/y);
            printf("x%y = %d/%d = %d\n",x , y, x%y);
        }
        else
            printf("x cant be devided by zero(y = 0)");
    
        if(x!=0){
            printf("y/x = %d/%d = %d\n",y , x, y/x);
            printf("y%x = %d/%d = %d\n",y , x, y%x);
        }
        else
            printf("y cant be devided by zero(x = 0)");
    
        return 0;
    }
    
    
    
    //homework5
    #include<stdio.h>
    
    int main(){
    
        float f, c;
        printf("Celsius: ");
        scanf("%f", &c);
    
        f = (c * (9.0/5.0)) + 32;
    
        printf("Celsius = %.3f and its fahreheit %.3f", c, f);
    
        return 0;
    }
    
    
    //homework6
    #include<stdio.h>
    
    int main(){
    
        int n, sum;
        printf("Enter n of 1+2+3+.....+n: ");
        scanf("%d", &n);
    
        if(n > 0){
            sum = (n * (n+1)) / 2;
            printf("Sum of nth number is : %d\n", sum);
        }
        else
            printf("N cant be negative\n");
    
        return 0;
    }
    
    
    //homework7
    #include<stdio.h>
    
    int main(){
    
        int n, sum;
        printf("Enter n of 1^2+2^2+3^2+.....+n^2: ");
        scanf("%d", &n);
    
        if(n > 0){
            sum = (n * (n+1) * (2*n+1)) / 6;
            printf("Sum of nth number is : %d\n", sum);
        }
        else
            printf("N cant be negative\n");
    
        return 0;
    }


