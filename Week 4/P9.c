// 9. WAP to swap two variables without using 3rd variable.

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a : "); scanf("%d", &a);
    printf("Enter the value of b : "); scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a is: %d\nThe value of b is: %d\n", a, b);
    return 0;
}