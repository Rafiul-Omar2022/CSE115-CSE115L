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
