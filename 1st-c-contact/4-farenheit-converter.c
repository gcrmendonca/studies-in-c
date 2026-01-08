#include <stdio.h>

int main() {
    
    float celcius;
    float farenheit;

    printf("Qual temperatura atual em celcius?");
    scanf("%f", &celcius);

    farenheit = 32 + celcius * 1.8; // in c the multiplication is calculated first automatically

    printf("\nA temperatura atual em farenheit e: %.2f\n", farenheit);

    return 0;
}