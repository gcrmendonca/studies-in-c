#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    char password[25];
    int max_range = 126, max_characters;
    int CharEnd = max_characters + 1;

    int DemandLowerCase;
    int DemandUpperCase;
    int DemandNumbers;
    int DemandSpecialCharacters;

    printf("Chose how much characters do you want in your password 1 to 24\n");
    printf("Characters: ");
    scanf("%d", &max_characters);

    printf("\nnow chose each paramter to your password\n");
    printf("How much capital letters: ");
    scanf("%d", &DemandUpperCase);

    printf("\nHow much numbers: ");
    scanf("%d", &DemandNumbers);

    printf("\nHow much special characters: ");
    scanf("%d", &DemandSpecialCharacters);

    password[CharEnd] = '\0'; //limits the string

    srand((unsigned)time(NULL));

    password_generation:

    for (int position = 0; position < max_characters; position++) {
        
        password[position] = (rand() % max_range) + 1;

    }

    password_parameters:

    int LowerCase = 0, UpperCase = 0, Numbers = 0, SpecialCharacters = 0;

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
        
    }

    password_validation:

    int ValidPassword = 0;

    if (DemandLowerCase && LowerCase == 0) {
        ValidPassword = 0;
    }
    if (DemandUpperCase && UpperCase == 0) {
        ValidPassword = 0;
    }
    if (DemandNumbers && Numbers == 0) {
        ValidPassword = 0;
    }
    if (DemandSpecialCharacters && SpecialCharacters == 0) {
        ValidPassword = 0;
    }

    if (ValidPassword) {
        printf("%s", password);
    }
    else{
        goto password_generation;
    }



    return 0;
}