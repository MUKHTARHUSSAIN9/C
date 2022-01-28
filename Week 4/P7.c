/*7. The length and breadth of a rectangle and radius of a circle are input through 
the keyboard. Write a program in C to calculate the area & perimeter of the rectangle, 
and the area & circumference of the circle.*/

#include <stdio.h>

int main(){
    int l, b, r;
    printf("Enter the length of the rectangle: "); scanf("%d", &l);
    printf("Enter the breadth of the rectangle: "); scanf("%d", &b);
    printf("Enter the radius of the circle: "); scanf("%d", &r);

    printf("Area of the Rectangle is: %d and Perimeter is: %d\n", (l*b), 2*(l+b));
    float area = (r*r)*(float)(22)/7;
    float p = 2*((float)(22)/7 * r);
    printf("Area of the circle is: %0.2f and circumference is: %0.2f\n", area, p);
    //upto 2 decimal points.
    return 0;
}