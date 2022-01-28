/*6. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program
to convert this temperature into Centigrade degrees.*/
#include <stdio.h>

int main(){
    float temp;
    printf("Enter the temperature in Fahrenheit degrees: ");
    scanf("%f", &temp); 
    float centi = (temp - 32) * (float)(5)/9;

    printf("Temperature in Centigrade degrees is: %0.2f\n", centi);
    //upto 2 decimal point
    return 0;
}