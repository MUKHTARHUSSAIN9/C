/* 3. Rajesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic
salary, and house rent allowance is 20% of basic salary. Write a program in C to calculate his
gross salary. */

#include <stdio.h>

int main(){
    int base_s;
    printf("Enter basic salary: ");
    scanf("%d", &base_s);

    float gross_s = (0.4 * base_s) + (0.2 * base_s) + base_s;

    printf("Gross salary is: %f\n", gross_s);

    return 0;
}
