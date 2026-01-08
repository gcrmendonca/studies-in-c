#include <stdio.h>

int main() {

    int num1, num2;

    printf("insira um numero inteiro:\n");
    scanf("%d", &num1);

    printf("\ninsira outro numero inteiro:\n");
    scanf("%d", &num2);
 
    if(num1 > num2) {

        printf("\no numero %d e maior que o numero %d\n", num1, num2);

    } else if(num1 == num2) {

        printf("\no numero %d e igual ao numero %d\n", num1, num2);

    } else {

        printf("\no numero %d e menor que o numero %d\n", num1, num2);

    }

    return 0;
}