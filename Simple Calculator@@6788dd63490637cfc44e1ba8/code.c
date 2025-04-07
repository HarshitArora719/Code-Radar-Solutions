#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);  // Read two integers and one operator

    if (c == '+') {
        printf("%d", a + b);
    }
    else if (c == '-') {
        printf("%d", a - b);
    }
    else if (c == '*') {
        printf("%d", a * b);
    }
    else if (c == '/') {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("error: division by zero");
        }
    }
    else {
        printf("error");
    }

    return 0;
}
