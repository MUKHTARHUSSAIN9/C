//1. WAP in C to find maximum between two numbers using switch case.

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a,&b);

    switch (a>b){
        case 0: //False Statement
            printf ("%d is Maximum\n", b);
            break;
        case 1: //True Statement
            printf("%d is Maximum\n", a);
            break;
    }
    
    return 0;
}
