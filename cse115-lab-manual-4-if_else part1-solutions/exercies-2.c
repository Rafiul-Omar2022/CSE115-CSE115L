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
