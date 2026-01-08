#include <stdio.h>

int main() {

    int n, result;

    printf("Selecione um numero inteiro:\n:");
    scanf("%d", &n);

    while (result < n)
    {
        printf("%d\n", result + 1);

        result = result + 1;

    }
    

    return 0;
}