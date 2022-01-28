/*7. In a town, the percentage of men is 52. The percentage of total literacy is 48. If total
percentage of literate men is 35 of the total population, write a program to find the total
number of illiterate men and women if the population of the town is 80,000.*/

#include <stdio.h>

int main(){
    int total_population = 80000;
    int total_men = 52 * (total_population/100); //52%
    int total_women = 48 * (total_population/100); //100 - 52 = 48%;

    int literate_men = 35 * (total_population/100);
    int literate_women = 48 * (total_population/100) - literate_men; 
    //Total literacy - literate men

    int illiterate_men = total_men - literate_men;
    int illiterate_women = total_women - literate_women;

    printf("Total illiterate men are: %d\n", illiterate_men);
    printf("Total illiterate women are: %d\n", illiterate_women);
 
    return 0;
}