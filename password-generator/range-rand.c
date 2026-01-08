#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char random_char2();

int main() {

    srand((unsigned)time(NULL));
    
    for (int i = 0; i < 20; i++){
    char random_character = random_char2();
    printf("%c", random_character);
    }
    printf("\n");

    return 0;
}

char random_char2(){

    return 33 + (rand() % 94);

}