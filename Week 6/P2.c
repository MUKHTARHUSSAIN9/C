/*2.Write a C program to find whether a given year is a leap year or not.*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("The given year is a Leap Year!\n");
            }
            else{
                printf("The given year is not a leap year.\n");
            }
        }
        else{
            printf("The given year is a Leap Year!\n");
        }
    }
    else{
        printf("The given year is not a leap year.\n");
    }
}