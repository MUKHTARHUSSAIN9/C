/*6. Write a program to find the simple interest where amount, rate percentage and year is
given as key board input. */

#include <stdio.h>

int main(){
    float amount, rate, year, si;
    printf("Enter the Amount, Rate percentage and Year: ");
    scanf("%f%f%f", &amount, &rate, &year);

    si = (amount * rate * year) / 100;
    printf("The Simple Interest is: %f\n", si);

    return 0;
}