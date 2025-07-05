#include <stdio.h>
#include <math.h>

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double square(double num);
double cube(double num);
double squareroot(double num);
double cuberoot(double num);
double circumference(double radius);


int main(){
    double num1, num2;
    double result;
    int choice;
    //do-while that loops infinitely until the user chooses to exit
    do{
        printf("********************************\n");
        printf("***********CALCULATOR***********\n");
        printf("what operation do you want to do\n");
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3.  multiplication\n");
        printf("4. division\n");
        printf("5. square\n");
        printf("6. cube\n");
        printf("7. squareroot\n");
        printf("8. cuberoot\n");
        printf("9. circumference\n");
        printf("10. exit\n");
        printf("Enter: ");
        scanf("%d", &choice);
        printf("\n");


        //switch case to perform the operations based on user's choice
        switch(choice){
            case 1:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                if(num2 == 0){
                    printf("A number cannot be divided by zero.\n");
                }
                else{
                    result = divide(num1, num2);
                    printf("Result: %.2lf\n", result);
                }
                
                break;
            case 5:
                 printf("Enter the number: ");
                scanf("%lf", &num1);
                result = square(num1);
                printf("Result: %.2lf\n", result);
                break;

            case 6:
                printf("Enter the number: ");
                scanf("%lf", &num1);
                result = cube(num1);
                printf("Result: %.2lf\n", result);
                break;
                
            case 7:
                 printf("Enter the number: ");
                scanf("%lf", &num1);
                result = squareroot(num1);
                printf("Result: %.2lf\n", result);
                break;
             
            case 8:
                 printf("Enter the number: ");
                scanf("%lf", &num1);
                result = cuberoot(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 9:
                printf("Enter radius of the circle: ");
                scanf("%lf", &num1);
                result = circumference(num1);
                printf("Result: %.2lf\n", result);
                break;  
            case 10:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid operator, please enter a valid operator.\n");
        }
        
    } while (choice != 10);
    return 0;
}

//Addition function
double add(double num1, double num2){
    return num1 + num2;
}

//Subtraction function
double subtract(double num1, double num2){
    return num1 - num2;
}

//Multiplication function
double multiply(double num1, double num2){
    return num1 * num2;
};

//Division function
double divide(double num1, double num2){
    return num1 / num2;
};

//Square function
double square(double num){
    return num * num;
};

//cube function
double cube(double num){
    return num * num * num;
};

//squareroot function
double squareroot(double num){
    return sqrt(num);
};

//cuberoot function
double cuberoot(double num){
    return cbrt(num);
};

//circumference function
double circumference(double radius){
    const double PI = 3.142;
    return PI * radius * radius;
};

  