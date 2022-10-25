			
	//Task1	
    #include<stdio.h>  
    int main(){
    
        int num_1, num_2;
        //First input
        printf("Insert first number: ");
        scanf("%d", &num_1);
        //second input
        printf("Insert second number: ");
        scanf("%d", &num_2);
        //showing results
        printf("Sum = %d\n", num_1 + num_2);
        printf("Product = %d\n", num_1 * num_2 );
        printf("Difference = %d\n", num_1 - num_2);
        printf("Quotient = %d\n", num_1 / num_2);
        printf("Remainder = %d\n", num_1 % num_2);
    
        return 0;
    }
	
	//Task 2
    #include <stdio.h>
    int main(){
    
        int num1, num2, num3;
        float avg;
        printf("Insert first number: ");
        scanf("%d", &num1);
    
        printf("Insert second number: ");
        scanf("%d", &num2);
    
        printf("Insert third number: ");
        scanf("%d", &num3);
    
        avg = ((num1 + num2 + num3) / 3.0);
        printf("The average is: %f", avg);
    
        return 0;
    }


    //task 3
    #include<stdio.h>
    
    int main(){
    
        float c, f;
        printf("Enter celsius: ");
        scanf("%f", &c);
    
        f = (c * (9.0/5.0)) + 32.0; // fraction .0 for converting to floating value
    
        printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);
    
        return 0;
    }


