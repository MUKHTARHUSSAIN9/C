/*5. Write a C program to convert a given integer (in seconds) to hours, minutes, and
seconds.*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the integer(in seconds): ");
    scanf("%d", &n);

    int hours = n / 3600;
    int minutes = (n - (hours * 3600))/60;
    int seconds = (n-(hours*3600 + minutes * 60));

    printf("The given integer contains %d Hours, %d Minutes and %d Seconds.\n", hours, minutes, seconds);

    return 0;
}