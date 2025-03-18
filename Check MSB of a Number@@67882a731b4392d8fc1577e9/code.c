#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int msb_set = 0;
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            msb_set = 1;
            break;
        }
    }
    if (msb_set==1)
        printf("Set");
    else
        printf("Not Set");
    return 0;
}
