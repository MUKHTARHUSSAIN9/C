/*7.Given the length and breadth of a rectangle, write a program to find whether the area 
of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/
#include <stdio.h>

int main(){
    int l, b;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d", &l, &b);

    int perimeter = 2 * (l + b);
    int area = l * b;

    if (area > perimeter){
        printf("Area of the Rectangle is greater than it's perimeter.\n");
    }
    else if (area == perimeter){
        printf("Area of the rectangle is equal to it's perimeter.\n");
    }
    else{
        printf("Area of the rectangle is less than it's perimeter.\n");
    }

    return 0;
}