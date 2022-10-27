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
