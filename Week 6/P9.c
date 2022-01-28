/* 9.If cost price and selling price of an item is input through the keyboard, 
WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. */

#include <stdio.h>

int main(){
    int cp, sp; //Cost Price and Selling Price
    printf("Enter the Cost Price and the Selling Price: ");
    scanf("%d%d", &cp, &sp);

    if (sp > cp){
        printf("Seller has made a profit of %d on each item\n", (sp - cp));
    }
    else if (sp < cp){
        printf("Seller has incures a loss of %d on each item\n", (cp - sp));
    }
    else{
        printf("Seller has neither gained a profit nor incured a loss\n");
    }

    return 0;
}