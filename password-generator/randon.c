#include <stdio.h>  //lib from c
#include <stdlib.h> //brings the rand/srand function
#include <time.h>   //brings the time function

int main () {

    int rand_num;


    // rand_input:

    // for (int i = 0; i < 10; i++) {
    //     rand_num = rand() % 25 + 1;  //rand uses the 24 + 1 as range to generate the rand numbers = 1 to 25
    //     printf("%d ", rand_num);    //it generates allways the same numbers
    // }

    // srand_input:

    // unsigned seed; //unsigned is an int that only stores positives numbers // the seed will be used to generate more random numbers

    // printf("Enter the seed for yout numbers: ");
    // scanf("%u", &seed); //%u is used to format unsigned int
    // srand(seed); //it runs the srand function using the seed

    // for (int i = 0; i < 10; i++) {
    //     rand_num = rand() % 25 + 1;     // uses the seed to bring random numbers
    //     printf("%d ", rand_num);
    // }

    // printf("\n");

    time_input:

    srand((unsigned)time(NULL)); //the time function generates a random seed // the time(NULL) uses the curent time as a seed to generate our rand
    for(int i = 0; i < 10; i++) {
        rand_num = rand() % 25 + 1;
        printf("%d ", rand_num);
    }
    printf("\n");

    return 0;
}