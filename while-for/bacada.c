#include <stdio.h> 

int main() {

    int n[10];

    // printf("%d\n", n[0]);

    // while(i < 10) {
    //     n[i] = i + 50;
    //     printf("n[%d] = %d\n", i, n[i]);
        
    //     i++;
    // }

    for(int j = 1; j <= 10; j++) {
        n[(j - 1)] = j;

        // printf("%d\n", j - 1);
        
        printf("n[%d] = %d\n", j - 1, n[j - 1]);
    }

    return 0;
}