// assignment-1
#include<stdio.h>

int main(){

    float s1, s2, s3;
    printf("Enter sides s1 s2 s3: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    if(s1!=0 && s2!=0 && s3!=0){
        if(s1+s2 > s3)
            printf("vaild");
        else if(s1+s3>s2)
            printf("vaild");
        else if(s2+s3>s1)
            printf("vaild");
        else
            printf("Not vaild");
    }else
        printf("not vaild");

    return 0;
}
