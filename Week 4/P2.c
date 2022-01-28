/*2. Write a program in C that takes input through keyboard for two integer variables 
and calculate their sum, difference, multiplication & division.*/
#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: "); scanf("%d", &a);
    printf("Enter the value b: "); scanf("%d", &b);
    int add = a + b;
    int diff = a - b;
    int multi = a * b;
    float div =(float)(a)/b;

    printf("Addition of a and b is: %d\n", add);
    printf("Subtraction of a and b is: %d\n", diff);
    printf("Multiplication of a and b is: %d\n", multi);
    printf("Division of a and b is: %f\n", div);
    return 0;
}
