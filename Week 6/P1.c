/* 1. Write a program to read the age of a candidate from keyboard
and find if she/he is eligibile for casting vote. */

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are Eligible!\n");
    }
    else{
        printf("Not Eligible\n");
    }

    return 0;
}