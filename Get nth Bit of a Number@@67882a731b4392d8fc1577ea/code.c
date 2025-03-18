#include <stdio.h>
int main() {
    int a; 
    scanf("%d",&a);
    int n = 3; 
    int bit = (a >> n) & 1;
    printf("%d\n", bit);
    return 0;
}
