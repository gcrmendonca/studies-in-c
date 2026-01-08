#include <stdio.h>

int main() {

    char secret[4], guess[4];

    secret[0] = '2';
    secret[1] = '4';
    secret[2] = '9';
    secret[3] = '0';
    
    printf("insira a senha:");
    scanf("%s", guess);

    for (int j = 0; j < 4; j++) {
        if(secret[j] != guess[j]) {
            printf("\nsenha invalida\n");
            return 1;
        } 
    }
    
    printf("\nsenha correta\n");

    return 0;
}