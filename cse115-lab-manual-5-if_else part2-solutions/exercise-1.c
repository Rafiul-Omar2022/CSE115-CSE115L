#include<stdio.h>

int main(){

    char ch;
    printf("Enter first latter of : ");
    scanf("%c", &ch);

    switch(ch){
        case 'M':
            printf("Mango ---- Tk.500/kg");
            break;
        case 'A':
            printf("Apple ---- Tk.250/kg,");
            break;
        case 'B':
            printf("Banana ----Tk. 130/kg");
            break;
        case 'C':
            printf("Cherry -----Tk. 270/kg");
            break;
        default:
            printf("Invaild input");
    }

    return 0;
}
