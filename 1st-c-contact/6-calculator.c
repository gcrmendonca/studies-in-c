#include <stdio.h>

int main() {

    int stay = 1, n1, n2;
    char operation;

    while(stay) {
    printf("\nCalculadora\n");
    
    printf("insira o primeiro numero:\n");
    scanf("%d", &n1);
    
    printf("\nqual operacao desejada? press '+' para soma, '-' pra subtracao, 'x' para multiplicacao e ':' para divisao\n"); //there is a space before %c, so it dosn't stop the code/skip code
    scanf(" %c", &operation);

    printf("\ninsira o segundo numero:\n");
    scanf("%d", &n2);
    
    
    if(operation == '+') {
        printf("\n%d + %d = %d\n", n1, n2, n1 + n2);
    } else if(operation == '-') {
        printf("\n%d - %d = %d\n", n1, n2, n1 - n2);
    } else if(operation == 'x') {
        printf("\n%d x %d = %d", n1, n2, n1 * n2);
    } else if(operation == ':') {
        printf("\n%d : %d = %d", n1, n2, n1 / n2);
    } else {
        printf("\noperacao '%c' irreconhecida", operation);
    }
    
    
    
    
        printf("\ncontinue press: 1 stop press: 0\n");
        scanf("%d", &stay);

    }

    return 0;
}