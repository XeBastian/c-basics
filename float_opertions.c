// Percentage calculator
#include <stdio.h>

int main(){
    float percentage = 0.0;
    float numerator;
    float denominator;
    
    // percentage calculation
    printf("Whats your number?\t: ");
    scanf("%f", &numerator);
    printf("\nWhats your denominator?\t: ");
    scanf("%f", &denominator);

    percentage = (numerator/100)*denominator;
    printf("%.2f",percentage);
    return 0;
}
