#include <stdio.h>
#define SWAP(A, B, TYPE) {TYPE temporary = A; A = B; B = temporary;}
int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    SWAP(a, b, int);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
 