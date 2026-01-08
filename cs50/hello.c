#include <stdio.h>

int main(void) 
{
    char answer[20];

    printf("What's your name? ");
    scanf("%s", answer);

    printf("\nhello, %s\n", answer);
    
    return 0;
}