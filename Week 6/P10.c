/*10.The  age  of  Ram, Shyam  and  Ajay  are  input  through  the  keyboard,  
write  a  program  to determine the youngest of the three. */

#include <stdio.h>

int main(){
    int ram, shyam, ajay;
    printf("Enter the age of Ram, Shyam and Ajay: ");
    scanf("%d%d%d", &ram, &shyam, &ajay);

    if (ram < shyam && ram < ajay){
        printf("Ram is the youngest person.\n");
    }
    else if (shyam < ram && shyam < ajay){
        printf("Shyam is the youngest person.\n");
    }
    else if (ajay < ram && ajay < shyam){
        printf("Ajay is the youngest person\n");
    }
    else if(ram == shyam && ram < ajay){
        printf("Ram and Shyam are of same age and younger than Ajay\n");
    }
    else if (ram == ajay && ram < shyam){
        printf("Ram and Ajay are of same age and younger than Shyam\n");
    }
    else if(shyam == ajay && shyam < ram){
        printf("Shyam and Ajay are of same age and younger than Ram\n");
    }
    else{
        printf("All three of them are of same age\n");
    }
    
    return 0;
}