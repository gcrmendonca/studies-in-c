#include <stdio.h>

int main() {

    char secret [50], guess[50];

    
    printf("\ninsira a senha: ");
    scanf("%s", secret); // the 49 limts to just 49 characters, the char ends with \0

    for(int position = 0; secret[position] != '\0'; position++) { 
        
        printf("%d\n", secret[position]);
    }
 
    //     int tamanho = strlen(senha);

    // for (int i = 0; i < tamanho; i++) { can be use too, it prints the size of the pass == 5
    //     printf("%d\n", senha[i]);
    // }

    return 0;
}