#include <stdio.h>
int main() {

int odd = 0;

    for(int i = 1; i <= 500; i++) {
        if(i % 2 != 0) {
           odd = odd + 1;
        }
    }

    printf("%d\n", odd);

    return 0;
}