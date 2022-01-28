/*8.Write a c program to read 3 numbers from keyboard and check the following conditions and print the output.
1.A is largest number
2.B is largest number
3.C is largest number
4.All numbers are equal
5.A, B are equal and greater than C
6.A, C are equal and greater than B
7.B, C are equal and greater than A */

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the values of A, B and C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c){
        printf("A is the largest number\n");
    }
    else if (b > a && b > c){
        printf("B is largest number\n");
    }
    else if (c > a && c > b){
        printf("C is the largest number\n");
    }
    else if(a == b && a == c){
        printf("All numbers are equal\n");
    }
    else if( a == b && a > c){
        printf("A and B are equal and greater than C\n");
    }
    else if(a == c && a > b){
        printf("A and C are equal and greater than B");
    }
    else if (b == c && b >a){
        printf("B and C are equal and greater than A\n");
    }
    else{
        printf("Condition not recognized\n");
    }

    return 0;
}