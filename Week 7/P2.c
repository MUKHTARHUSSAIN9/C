//2. WAP in C to check whether a number is positive, negative or zero using switch case

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    switch ((n>0) + (n>=0)){ //Gives 2 if n>0; 1 if n==0 and 0 if n is negative
        case 2: //False Statement
            printf ("%d is a Positive Number\n", n);
            break;
        case 1: //True Statement
            printf("%d is equal to Zero\n", n);
            break;
        case 0: //True Statement
            printf("%d is a Negative Number\n", n);
            break;
    }
    
    return 0;
}