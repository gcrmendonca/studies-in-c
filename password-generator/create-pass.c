#include <stdio.h> 
#include <string.h>         //brings the libary that has strlean

int main() {

    // user criar uma senha
    // validar os parametros de senha
    
    char pass[21];

    //parameters for pass:

    int min_size = 6;
    int demand_lowercase = 1;
    int demand_upercase = 1;       //define the minimum time each one has to appear in the pass
    int demand_numbers = 1;
    int demand_special_characters = 0;



    printf("create a password that has upercase and lowercase letters, numbers, minimun 6 characters\n");

    input_point: //labels the intput point start

    printf("\npassword: ");
    scanf("%20s", pass);  //the 20 limts the size to 20 
    
    int pass_size = strlen(pass); //has to be after we declare the pass, it reads the size of the pass

    //parameters counter

    int lowercase = 0;
    int upercase = 0;  //define the time that each apears to 0
    int numbers = 0;
    int special_characters = 0; 
    
    //loop analizyng password 

    for (int array_position = 0; pass[array_position] != '\0'; array_position++) {

        if (pass[array_position] >= 97 && pass[array_position] <= 122) {
            lowercase++;
        }

        else if (pass[array_position] >= 65 && pass[array_position] <= 90) {        //add to each parameter the number of time that each one apears
            upercase++;
        }

        else if (pass[array_position] >= 48 && pass[array_position] <= 57) {
            numbers++;
        }

    }

    
    int valid_pass = 1; //is the pass valid?

    // parameters to define if the pass is valid

    if (pass_size < min_size) {
        valid_pass = 0;
    }

    if (demand_lowercase && lowercase == 0) {
        valid_pass = 0;
    }

    if (demand_upercase && upercase == 0) {
        valid_pass = 0;
    }                                                   //if it demands upercase and upercase == 0 its invalid

    if (demand_numbers && numbers == 0) {
        valid_pass = 0;
    }

    if (demand_special_characters && special_characters == 0) { 
        valid_pass = 0;
    }

    if (valid_pass) {
        printf("valid password\n");
    }

    else {
        printf("invalid password try again\n");
        goto input_point; //goes to the label input_point
    }



    return 0;
}