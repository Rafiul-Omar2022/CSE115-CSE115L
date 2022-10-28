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
