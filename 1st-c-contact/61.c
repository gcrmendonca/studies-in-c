#include <stdio.h>

int main() {
    
    int stay = 1, n1, n2;


    while(stay) {
        printf("\ncalculadora de soma:\n");
        
        printf("\ninsira o primeiro numero:\n");
        scanf("%d", &n1);
        printf("\ninsira o segundo numero:\n");
        scanf("%d", &n2);

        printf("\n%d + %d = %d\n", n1, n2, n1 + n2);

        printf("\ncontinue press: 1 stop press: 0\n");
        scanf("%d", &stay);
    }


    return 0;
}