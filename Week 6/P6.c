/* 6.Using six if statements (equality & relational operators) to compare two numbers input by user.  If  the  condition  in  any  of  these  if  statement  is  satisfied,  
the  printf  statement associated with that if is executed.*/ 

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two integers, and I will tell you\nThe relationship they satisfy: ");
    scanf("%d%d", &a,&b);
    
    if (a!=b){
        printf("%d is not equal to %d\n", a, b);
    }
    if (a<b){
        printf("%d is less than %d\n", a, b);
    }
    if (a<=b){
        printf("%d is less than or equal to %d\n", a, b);
    }
    if (a>b){
        printf("%d is greater than %d\n", a, b);
    }
    if (a>=b){
        printf("%d is greater than or equal to %d\n", a, b);
    }

    return 0;
}