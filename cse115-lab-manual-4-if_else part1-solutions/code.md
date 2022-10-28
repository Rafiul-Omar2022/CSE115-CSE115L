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

    //exe-2
    #include<stdio.h>

    int main(){

        unsigned int age;
        printf("Enter age of a person: ");
        scanf("%d", &age);

        if(age>= 25 && age<=45)
            printf("Eligible for work.\n");
        else
            printf("Your too young or too old.\n");

        return 0;
    }

    //exe-3
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

    // assignment-1
    #include<stdio.h>

    int main(){

        float s1, s2, s3;
        printf("Enter sides s1 s2 s3: ");
        scanf("%f %f %f", &s1, &s2, &s3);

        if(s1!=0 && s2!=0 && s3!=0){
            if(s1+s2 > s3)
                printf("vaild");
            else if(s1+s3>s2)
                printf("vaild");
            else if(s2+s3>s1)
                printf("vaild");
            else
                printf("Not vaild");
        }else
            printf("not vaild");

        return 0;
    }

    //assignment-2
    #include<stdio.h>

    int main(){

        float a, b, c;
        const float angle = 180;

        printf("Enter three angles  of triangle: ");
        scanf("%f %f %f", &a, &b, &c);

        if((a+b+c) == angle){
            printf("valid");
        }else
            printf("Invalid");

        return 0;
    }


    //assignment-3
    #include<stdio.h>

    int main(){

        char a;
        printf("Enter a character: ");
        scanf("%c", &a);

        if((a>='0' && a<='9') || (a>='a' && a<='z') || (a>='A' && a<='Z'))
            printf("vaild hex code");
        else
            printf("Invalid");


        return 0;
    }

    //assignment-4

    #include<stdio.h>

    int main(){

        float num, i;
        printf("Enter a number : ");
        scanf("%f", &num);

        i = (int)num;
        if(num-i>0)
            printf("has fractional ");
        else
            printf("no fractional ");



        return 0;
    }

    //assignment-5
    #include<stdio.h>

    int main(){

        float r, a, diameter, diagonal;
        printf("Enter radius of circle and side of squre: ");
        scanf("%f %f", &r, &a);

        diameter = 2 * r;
        diagonal = 1.41 * a;
        if(diameter == diagonal)
            printf("squre can be place in circle");
        else
            printf("squre cant be place in circle");

        return 0;
    }

