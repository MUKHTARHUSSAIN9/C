/*8. A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
withdrawn is input through the keyboard in hundreds, find the total number of currency
notes of each denomination the cashier will have to give to the withdrawer.*/

#include <stdio.h>

int main(){
    int amount;
    printf("Enter the amount of money to be withdrawn: ");
    scanf("%d", &amount);

    int hundreds = amount / 100;
    int fiftees = (amount - (hundreds * 100)) / 50;
    int tens = (amount - ((hundreds * 100) + (fiftees*50)))/10;

    printf("Notes of 100 currency are: %d\n", hundreds);
    printf("Notes of 50 currency are: %d\n", fiftees);
    printf("Notes of 10 currency are: %d\n", tens);

    return 0;
}