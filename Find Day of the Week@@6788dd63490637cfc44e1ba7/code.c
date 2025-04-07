#include <stdio.h>

int main() {
    int a;
    const char *days[] = {"Invalid", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    scanf("%d", &a);
    
    if (a >= 1 && a <= 7) {
        printf("%s", days[a]);
    } else {
        printf("Invalid");
    }

    return 0;
}
