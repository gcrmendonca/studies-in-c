#include <stdio.h>

int main() {
    
    int num;

    printf("insira um numero:\n");
    scanf("%d", &num);

    if(num % 2 == 0) {
        
        printf("\no numero %d e par\n", num);

    } else {

        printf("\no numero %d e impar\n", num);

    }

    return 0;
}