/* 1. Find the product of two floating point numbers.*/
#include <stdio.h>

int main(){
    float n1, n2;
    printf ("Enter two floating point numbers: ");
    scanf("%f%f", &n1,&n2);

    float ans = n1 * n2;
    printf("Product is: %f\n", ans);


    return 0;
}