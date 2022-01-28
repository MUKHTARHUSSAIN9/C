//3. WAP in C to find all roots of a quadratic equation using switch case.
#include <stdio.h>
#include<math.h>

int main(){
    //Let the Quadratic Eqn be ax^2 + bx + c, so we need to input a, b and c.
    float a, b, c;
    printf("Enter the value of a, b and c:");
    scanf("%f%f%f", &a, &b, &c);
    float d = (b*b - 4*a*c);

    float r1 = (-b + sqrt((float) d))/2 * a; //Root 1
    float r2 = (-b - sqrt((float) d))/2 * a; //Root 2

    switch ((d>0) + (d>=0)){ //Gives 2 if d>0; 1 if d = 0 and 0 if n is negative
        case 2: //False Statement
            printf ("%.2lf and %.2lf are the roots of the given Quadratic Equation\n", r1, r2);
            break;
        case 1: //True Statement
            printf("Both the roots are equal to %.2lf\n", r1);
            break;
        case 0: //True Statement
            printf("Roots are Imaginary!\n");
            printf("Root1 = %.2lf+%.2lfi and Root2 = %.2f-%.2fi\n",-b / (2 * a), sqrt(-d) / (2 * a),\
             -b / (2 * a), sqrt(-d) / (2 * a));
            break;
    }
    return 0;
}