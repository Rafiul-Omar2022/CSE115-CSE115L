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
