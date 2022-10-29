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
