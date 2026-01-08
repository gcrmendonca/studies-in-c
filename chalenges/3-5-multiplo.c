#include <stdio.h> 
int main() {

    int sum = 0;

    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            sum = sum + 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}