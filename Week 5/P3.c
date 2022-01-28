/*3. Write a C program to convert a given integer (in days) to years, months, and 
days, assumes that all months have 30 days, and all years have 365 days.*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the integer: ");
    scanf("%d", &n);

    int years = n / 365;
    int months = (n - (years * 365))/30;
    int days = (n-(years*365 + months * 30));

    printf("The given integer contains %d years, %d months and %d days.\n", years, months, days);

    return 0;
}