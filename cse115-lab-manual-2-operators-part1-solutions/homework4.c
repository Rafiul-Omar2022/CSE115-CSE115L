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
