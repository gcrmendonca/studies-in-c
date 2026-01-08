#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char PassWordRange();

int main() {

    char password[25];
    int MaxCharacters;
    int CharEnd = MaxCharacters + 1;
    
    int DemandsLowerCase;
    int DemandsUpperCase;
    int DemandsNumbers;
    int DemandsSpecialCharacters;

    printf("chose the lenght of the password 6 to 24: ");
    scanf(" %d", &MaxCharacters);

    printf("Chose the nescesary amount of: \n");
    printf("Capital Leters: ");
    scanf("%d", &DemandsUpperCase);
    printf("\nNumbers: ");
    scanf("%d", &DemandsNumbers);
    printf("\nSpecial Characters: ");
    scanf("%d", &DemandsSpecialCharacters);

    password[CharEnd] = '\0';

    password_generation:

    srand((unsigned)time(NULL));

    for (int position = 0; position <= MaxCharacters; position++) {
        
        password[position] = PassWordRange();
    }

    PasswordParameters:

    int LowerCase = 0;
    int UpperCase = 0;
    int Numbers = 0;
    int SpecialCharacters = 0;

    for (int position = 0; password[position] != '\0'; position++) {
        
        if (password[position] >= 'a' && password[position] <= 'z') {
            LowerCase++;
        }
        else if (password[position] >= 'A' && password[position]  <= 'Z') {
            UpperCase++;
        }
        else if (password[position] >= '0' && password[position]  <= '9') {
            Numbers++;
        }
        else if (password[position] >=  '!' && password[position] <= '/'){
            SpecialCharacters++;
        }
        else if (password[position] >= ':' && password[position] <= '@') {
            SpecialCharacters++;
        }
        else if (password[position] >= '`' && password[position] <= '`') {
            SpecialCharacters++;
        }
        else if (password[position] >= '`' && password[position] <= '{') {
            SpecialCharacters++;
        }
        
    }

    password_validation:

    int ValidPassword = 1;

    if (DemandsLowerCase && LowerCase == 0) {
        ValidPassword = 0;
    }
    if (DemandsUpperCase && UpperCase == 0) {
        ValidPassword = 0;
    }
    if (DemandsNumbers && Numbers == 0) {
        ValidPassword = 0;
    }
    if (DemandsSpecialCharacters && SpecialCharacters == 0) {
        ValidPassword = 0;
    }

    if (ValidPassword) {
        printf("%s \n", password);
    }
    else{
        goto password_generation;
    }


    return 0;
}

char PassWordRange() {

    return 33 + (rand() % 94);

}