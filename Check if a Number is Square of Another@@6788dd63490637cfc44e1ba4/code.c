#include <stdio.h>
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    int num;
    printf("");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("No");
    } else {
        printf("Yes");
    }
    return 0;
}