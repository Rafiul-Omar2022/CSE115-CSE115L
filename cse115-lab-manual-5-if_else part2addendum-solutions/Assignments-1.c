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
