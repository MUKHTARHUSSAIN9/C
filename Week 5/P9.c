/*9. If the total selling price of 15 items and the total profit earned on them is input through
the keyboard, write a program to find the cost price of one item.*/

#include <stdio.h>

int main(){
    float sp, profit;
    printf("Enter the total selling price of 15 items and the profit: ");
    scanf("%f%f", &sp, &profit);

    float cp = (sp - profit)/15; //cost price

    printf("The Cost Price of one item is: %0.2f\n", cp);

    return 0;
}