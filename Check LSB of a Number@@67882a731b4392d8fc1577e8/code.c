#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num & 1) {
        printf("The LSB of %d is 1.\n", num);
    } else {
        printf("The LSB of %d is 0.\n", num);
    }

    return 0;
}