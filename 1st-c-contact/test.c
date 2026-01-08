#include <stdio.h> // Preprocessor directive to include the standard input/output library

int main() { // The main function where program execution starts

    char nome[20];



    // Using the printf function to display output
    printf("insira seu nome: ");
    
    scanf("%s", nome);
    printf("\nseu nome e: %s\n", nome);

    return 0; // Indicates that the program executed successfully
}