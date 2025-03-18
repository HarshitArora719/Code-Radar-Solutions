#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int msb = 0;
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            msb = 1;
            break;
        }
    }
    printf("Set");
    return 0;
}

