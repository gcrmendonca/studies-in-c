#include <stdio.h>
#define SIZE 10

int main() {

    char numbers[SIZE];
    
    printf("insert %d numbers, after each one press ENTER:\n", SIZE);
    
    for (int ArrayPosition = 0; numbers[ArrayPosition] < SIZE; ArrayPosition++) {
        scanf(" %c", &numbers[ArrayPosition]);
    }
    
    int even = 0;
    int odd = 0;
    int zeros = 0; 
    int positives = 0;
    int negatives = 0;

    for (int position = 0; position < SIZE; position++) {
        
        if (numbers[position] % 2 == 0) {
            even++;
        } else if (numbers[position] % 2 != 0) {
            odd++;
        } else if (numbers[position] > 0) {
            positives++;
        } else if (numbers[position] < 0) {
            negatives++;
        } else if (numbers[position] == 0) {
            zeros++; 
            even++;
        }

    }

    printf("\nevens: %d", even);
    printf("\nodds: %d", odd);
    printf("\npositives: %d", positives);
    printf("\nnegatives: %d", negatives);
    printf("\nzeros: %d\n", zeros);


    return 0;
}