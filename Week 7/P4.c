/*  4. WAP in C to accept id from user to confirm department using switch-case.*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter your ID: ");
    scanf("%d", &n);
    switch (n){
        case 1:
            printf("Biotechnology Department\n"); break;
        case 2:
            printf("Civil Department\n"); break;
        case 3:
            printf("Electrical Department\n"); break;
        case 4:
            printf("Electronics Department\n"); break;
        case 5:
            printf("Mechanical Department\n"); break;
        case 6:
            printf("Chemical Department\n"); break;
        case 10:
            printf("Computer Science Department\n"); break;
        default:
            printf("Department not recognized\n");
    }
    return 0;
}