#include <stdio.h>

int main() {

    float n1;
    float n2;
    float n3;
    float result;

    
    printf("insira a nota 1:\n");
    scanf("%f", &n1);

    printf("\ninsira a nota 2:\n");
    scanf("%f", &n2);

    printf("\ninsira a nota 3:\n");
    scanf("%f", &n3);

    result =(n1 + n2 + n3) / 3;
    
    if(result >= 7) { 

        printf("\nO aluno foi aprovado com %.2f de media\n", result);

    } else if(result < 7 && result >= 5 ) { // ou == || e == &&

        printf("\nO aluno esta de recuperacao com nota: %.2f\n", result);

    } else {

        printf("\nO aluno foi reprovado com %.2f de media\n", result);

    }

    return 0;
}