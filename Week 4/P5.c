/*5. If the marks obtained by a student in five different subjects are input through the keyboard, find
out the aggregate marks and percentage marks obtained by the student. Assume maximum
marks in each subject=100.*/

#include <stdio.h>

int main(){
    int s1, s2, s3, s4, s5;

    printf("Enter the marks in subject 1: "); scanf("%d", &s1);
    printf("Enter the marks in subject 2: "); scanf("%d", &s2);
    printf("Enter the marks in subject 3: "); scanf("%d", &s3);
    printf("Enter the marks in subject 4: "); scanf("%d", &s4);
    printf("Enter the marks in subject 5: "); scanf("%d", &s5);
    int agg = (s1+s2+s3+s4+s5);
    float per = (float)(agg)/5;

    printf("Aggregate Marks is: %d\n", agg);
    printf("Percentage is: %0.2f\n", per); //upto 2 decimal points

    return 0;
}