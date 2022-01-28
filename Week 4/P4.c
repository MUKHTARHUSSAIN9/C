/* 4. The distance between two cities (in Km) is input through the keyboard. Write a program
to convert and print this distance in meters, feet, inches and centimeters.*/
#include <stdio.h>

int main(){
    printf("Enter the distance between the cities (in KM): ");
    int d;
    scanf("%d", &d);
    printf("Distance in Metres is: %d\n", (d*1000));
    printf("Distance in feet is: %f\n", (float)(d*3280.84));
    printf("Distance in inches is: %f\n", (float)(d*39370.1));
    printf("Distance in centimetres is: %d\n", (d*1000*100));

    return 0;
}