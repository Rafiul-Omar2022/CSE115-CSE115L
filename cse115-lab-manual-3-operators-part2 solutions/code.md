

    //ex-1
    #include<stdio.h>
    
    int main(){
    
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
    
        if(n & 1 == 0)
            printf("EVEN");
        else
            printf("ODD");
    
        return 0;
    }
    
    //ex-2
    #include<stdio.h>
    
    int main(){
    
        int m, n;
        printf("Enter two integers with spaces m n: ");
        scanf("%d %d", &m, &n);
        printf("The value of m*2n is = %d\n", m<<n);
        printf("The value of m/2n is = %d\n", m>>n);
    
        return 0;
    }
    
    //ex-3
    #include<stdio.h>
    #include<math.h>
    #define PI 3.1416
    
    int main(){
    
    
        float radius, vol;
        printf("Enter radius of sphere: ");
        scanf("%f", &radius);
    
        vol  = (4.0/3.0) * PI * pow(radius, 3);
        printf("Volume of of a sphere : %.3f", vol);
    
        return 0;
    }
    
    //ex-4
    #include<stdio.h>
    
    int main(){
    
        float x1, x2, y1, y2, x, y;
        printf("Enter two co-orndinates x1, y1, x2, y2, with spaces: ");
        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
        x = (x1 + x2) / 2;
        y = (y1 + y2) / 2;
    
        printf("Mid point (%.1f, %.1f) (%.1f,%.1f) mid point is (%.2f, %.2f)", x1, y1, x2, y2, x, y);
    
        return 0;
    }
    
    //ex-5
    #include<stdio.h>
    
    int main(){
    
        //@= s/r;
        float radius, arclength, angle;
        printf("Enter radius and arc length with spaces: ");
        scanf("%f %f",&radius, &arclength);
    
        angle = arclength/ radius;
        printf("Angle %.2f", angle);
    
        return 0;
    }
    
    //hw-1
    #include<stdio.h>
    
    int main(){
    
        /*
            ------a-------
          /  |            |
         c   h            d
        /    |            |
       /     |            |
        -----------b------
        */
        // area of trapezoid
        float a, b1, h1, b2, h2, area1, area2;
        printf("Enter base of trapezoid a: ");
        scanf("%f", &a);
        printf("Enter base trapezoid b: ");
        scanf("%f", &b1);
        printf("Enter hight trapezoid h: ");
        scanf("%f", &h1);
    
        area1 = ((a + b1) * h1) / 2;
    
        //area of parallelogram
        printf("Enter base of parallelogram: ");
        scanf("%f", &b2);
        printf("Enter base of hight: ");
        scanf("%f", &h2);
    
        area2 = b2 * h2;
    
        // all output
        printf("\n\nArea of trapezoid: %.2f\n\n", area1);
        printf("Area of parallelogram: %.2f\n", area2);
    
        return 0;
    }
    
    
    //hw-2
    #include<stdio.h>
    #include<math.h>
    #define PI 3.1416
    
    int main(){
    
        float r, h, vol, sur_area;
        printf("Enter radius and hight of a cone: ");
        scanf("%f %f", &r, &h);
    
        vol = (PI * pow(r, 2) * h) / 3;
        sur_area = PI * r * (r + (sqrt(pow(h, 2)+ pow(r, 2))));
        printf("Cone area = %.2f and cone volume = %.2f", sur_area, vol);
    
        return 0;
    }
    
    //hw-3
    #include<stdio.h>
    #include<math.h>
    
    int main(){
    
        float b, h, hypo;
        printf("Enter the lengths of base and height of a right angle triangle with spaces: ");
        scanf("%f %f", &b, &h);
    
        hypo = sqrt(pow(b, 2) + pow(h, 2));
    
        printf("Hypotenuse %.2f", hypo);
    
        return 0;
    }
    
    //hw-4
    #include<stdio.h>
    
    int main(){
    
        int n, count, r1, r2, r3, r4, r5, r6, r7, r8;
    
        printf("Enter a number: ");
        scanf("%d", &n);
    
        r1 = n / 500;
        count = n % 500;
    
        r2 = count / 100;
        count %= 100;
    
        r3 = count / 50;
        count %= 50;
    
        r4 = count / 20;
        count %= 20;
    
        r5 = count / 10;
        count %= 10;
    
        r6 = count / 5;
        count %= 5;
    
        r7 = count/ 2;
        count %= 2;
    
        r8 = count / 1;
    
    
        printf("500: %d\n", r1);
        printf("100: %d\n", r2);
        printf("50: %d\n", r3);
        printf("20: %d\n", r4);
        printf("10: %d\n", r5);
        printf("5: %d\n", r6);
        printf("2: %d\n", r7);
        printf("1: %d\n", r8);
    
    
    
    
        return 0;
    }


