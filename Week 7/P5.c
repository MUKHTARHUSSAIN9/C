/*5. WAP in C to check whether the password is correct or incorrect using switch-case.
For e.g. Input:

Enter your password: 123

Expected Output:

Welcome*/

#include <stdio.h>

int main(){
    int passwd;
    printf("Enter the Password: ");
    scanf("%d", &passwd);

    switch (passwd){
        case 123:
            printf("Welcome!\n");
            break;
        default:
            printf("Incorrect password.\n");
    }

    return 0;
}