#include <stdio.h>

int main() {

    int n;

    printf("insert a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("\nthe number %d is even\n", n);
    } else if (n > 0 && n % 2 == 0) {
        printf("\nthe number %d is positive and even\n", n);
    }   else if (n > 0 && n % 2 != 0) {
        printf("\nthe number %d is positive and odd\n", n);
    } else if (n < 0 && n % 2 == 0) {
        printf("\nthe number %d is negative and even\n", n);
    } else {
        printf("\nthe number %d is negative and odd\n", n);
    }

    return 0;
}