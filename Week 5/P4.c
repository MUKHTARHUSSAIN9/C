/*4. Write a C program that accepts two item’s weight (floating points' values) 
and number of purchase (floating points' values) and calculate the average 
value of the items.*/

#include <stdio.h>

int main(){
    float w1, w2, n;
    printf("Enter the weights and number of purchase: ");
    scanf("%f%f%f", &w1, &w2, &n);

    float avg = n / (w1+w2);
    printf("Average value of the items is: %f\n", avg);

    return 0;

}