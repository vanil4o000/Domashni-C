#include <stdio.h>
#define MAX 5
int main() {
    int a[MAX] = {0};
    for (int i = 0; i < MAX; i++)
        printf("%d", a[i]);
    return 0;
}