/*5.When three angle of triangle enter from key board, check the triangle is valid or not.*/
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the three angles of the triangle:\n");
    scanf("%d%d%d", &a,&b,&c);

    int sum = a + b + c;
    if (sum == 180){
        printf("The triangle with the given angles is VALID!\n");
    }
    else{
        printf("Triangle NOT VALID.\n");
    }
}