// 3. Encontre o maior e o menor elemento do array e mostre suas posições.

#include <stdio.h>

int main(void) {
    
    int amount_of_numbers;
    
    printf("insert the amount of numbers do you want to use: ");
    scanf("%d", &amount_of_numbers);
    
    float numbers[amount_of_numbers];
    
    for(int i = 0; i < amount_of_numbers; i++) {
        printf("\ninsert the number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    
    int max = numbers[0], biggest = 0;
    int minimun = numbers[0], lowest = 0;
    
    for(int i = 0; i < amount_of_numbers; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
            biggest = i;
        }
        else if(numbers[i] < minimun) {
            minimun = numbers[i];
            lowest = i;
        }
    }
    
    printf("\nThe bigest value is on the array position: [%d]", biggest);
    printf("\nThe lowwest value is on the array position: [%d]\n", lowest);
    
    return 0;
}
