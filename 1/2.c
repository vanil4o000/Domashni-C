#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Bigger number: %d\n", MAX(a, b));
    return 0;
}