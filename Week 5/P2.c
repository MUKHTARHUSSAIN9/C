/*2. WAP to find the quotient and remainder in a division..*/
#include <stdio.h>

int main(){
    int divident, divisior;
    printf ("Enter a divident and divisior: ");
    scanf("%d%d", &divident, &divisior);

    int quotient = divident/divisior;
    int rem = divident % divisior;

    printf("Quotient is: %d\nRemainder is: %d\n", quotient, rem);
    
    return 0;
}