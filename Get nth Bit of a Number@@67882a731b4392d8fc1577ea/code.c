#include <stdio.h>

int main() {
    int number = 29; 
    int n = 3; 
    int bit = (number >> n) & 1;
    printf("The %dth bit is: %d\n", n, bit);
    return 0;
}
