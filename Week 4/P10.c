// 10. WAP to find the area of a triangle given base and height as input 
// from keyboard.
#include <stdio.h>

int main(){
    int b, h;
    printf("Enter the base of the triangle : "); scanf("%d", &b);
    printf("Enter the height of the triangle : "); scanf("%d", &h);

    float area = 0.5 * b * h;

    printf("The Area of the triangle is: %0.2f\n", area);
    return 0;
}