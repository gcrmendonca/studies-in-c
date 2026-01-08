#include <stdio.h>

int main () {

    char character;

    printf("insira um caracter:\n");
    scanf("%c", &character);

    if(character >= 'A' && character <= 'Z') {
        printf("'%c' e maisculo\n", character);
    } else if(character >= 'a' && character <= 'z') {
        printf("'%c' e minusculo\n", character);
    } else if(character >= '0' && character <= '9') {
        printf("'%c' e um numero\n", character);
    } else {
        printf("'%c' e outro simbulo\n", character);
    }

    return 0;
}