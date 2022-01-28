/*8. Two numbers are input through the keyboard into two locations A and B. Write a program in C
to interchange the contents of A and B.*/

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a : "); scanf("%d", &a);
    printf("Enter the value of b : "); scanf("%d", &b);

    int temp = a; //temporary variable named temp
    a = b;
    b = temp;

    printf("The value of a is: %d\nThe value of b is: %d\n", a, b);
    return 0;
}