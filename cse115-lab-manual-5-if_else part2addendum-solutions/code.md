

    //assi-1
    #include<stdio.h>

    int main(){

        float tax, base_tax, per_of_exc, salary, min_salary;
        printf("Enter salary range: ");
        scanf("%f", &salary);

        if(salary>0 && 14999.99>=salary){
            min_salary = 0;
            base_tax = 0.0/100.0;
            per_of_exc = 15;
            tax = (base_tax) + ((per_of_exc)*(salary - min_salary));
            printf("%.2f", tax);
        }
        else if(salary>=15000 && 29999.99>=salary){
            min_salary = 15000;
            base_tax = 2250;
            per_of_exc = 18.0/100.0;
            tax = (base_tax) + (per_of_exc)*(salary - min_salary);
            printf("%.2f", tax);
        }
        else if(salary>=30000 && 49999.99>=salary){
            min_salary = 30000;
            base_tax = 5400;
            per_of_exc = 22.0/100.0;
            tax = (base_tax) + ((per_of_exc)*(salary - min_salary));
            printf("%.2f", tax);
        }
        else if(salary>=50000 && 79999.99>=salary){
            min_salary = 50000;
            base_tax = 11000;
            per_of_exc = 27.0/100.0;
            tax = (base_tax) + ((per_of_exc)*(salary - min_salary));
            printf("%.2f", tax);
        }
        else if(salary>=80000 && 150000.00>=salary){
            min_salary = 80000;
            base_tax = 11000;
            per_of_exc = 33.0/100.0;
            tax = (base_tax) + ((per_of_exc)*(salary - min_salary));
            printf("%.2f", tax);
        }else
            printf("Invalid input");

        return 0;
    }

    ////assi-2
    #include<stdio.h>

    int main()
    {

        int sem;
        printf("Enter semester: ");
        scanf("%d", &sem);

        if(sem==0)
            printf("Invalid semester");
        else if(sem>=1 && sem<=3)
            printf("Freshman");
        else if(sem>=4 && sem<=6)
            printf("Sophomore");
        else if(sem>=7 && sem<=9)
            printf("Junior");
        else if(sem>=10 && sem<=12)
            printf("Senior");
        else if(sem>12)
            printf("You must graduate soon");
        else
            printf("Invalid");

        return 0;
    }

    //assi-3
    #include<stdio.h>

    int main()
    {

        int sem;
        printf("Enter semester: ");
        scanf("%d", &sem);

        switch(sem>=0)
        {
        case 1:

            if(sem == 0)
                printf("Invalid semester");
            else if(sem>=1 && sem<=3)
                printf("Freshman");
            else if(sem>=4 && sem<=6)
                printf("Sophomore");
            else if(sem>=7 && sem<=9)
                printf("Junior");
            else if(sem>=10 && sem<=12)
                printf("Senior");
            else if(sem>12)
                printf("You must graduate soon");
            else
                printf("Invalid");

            break;

        case 0:
            printf("Invalid semester");
            break;
        }

        return 0;
    }

    //assi-4
    #include<stdio.h>

    int main(){

        char ch;
        float x, y, go;

        printf("Enter current coordinate (x and y positions): ");
        scanf("%f %f", &x, &y);

        printf("Enter No. units towards direction: ");
        scanf("%f", &go);

        printf("Enter Direction: ");
        scanf(" %c", &ch);

        if(ch=='N' || ch=='n')
            printf("New coordinate: (%.1f,%.1f)", x, y+go);
        else if(ch=='S' || ch=='s')
            printf("New coordinate: (%.1f,%.1f)", x, y-go);
        else if(ch=='E' || ch=='e')
            printf("New coordinate: (%.1f,%.1f)", x-go, y);
        else if(ch=='W' || ch=='w')
            printf("New coordinate: (%.1f,%.1f)", x+go, y);
        else
            printf("Wrong input");

        return 0;
    }

    //assi-5
    #include<stdio.h>

    int main()
    {

        char ch;
        float x, y, go;

        printf("Enter current coordinate (x and y positions): ");
        scanf("%f %f", &x, &y);

        printf("Enter No. units towards direction: ");
        scanf("%f", &go);

        printf("Enter Direction: ");
        scanf(" %c", &ch);

        switch(ch)
        {
        case 'N':
            printf("New coordinate: (%.1f,%.1f)", x, y+go);
            break;
        case 'n':
            printf("New coordinate: (%.1f,%.1f)", x, y+go);
            break;
        case 'S':
            printf("New coordinate: (%.1f,%.1f)", x, y-go);
            break;
        case 's':
            printf("New coordinate: (%.1f,%.1f)", x, y-go);
            break;
        case 'E':
            printf("New coordinate: (%.1f,%.1f)", x-go, y);
            break;
        case 'e':
            printf("New coordinate: (%.1f,%.1f)", x-go, y);
            break;
        case 'W':
            printf("New coordinate: (%.1f,%.1f)", x+go, y);
            break;
        case 'w':
            printf("New coordinate: (%.1f,%.1f)", x+go, y);
            break;
        default:
            printf("Invalid input");
        }

        return 0;
    }


