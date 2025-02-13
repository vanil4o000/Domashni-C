#include <stdio.h>
#define SWAP(A, B, TYPE) {TYPE temporary = A; A = B; B = temporary ;}
#define SORT(A, SIZE, TYPE, COMPARE) {\
    for (int i = 0; i < SIZE; i++) \
       for (int j = i + 1; j < SIZE; j++) \
            if (A[i] COMPARE A[j]) \
          SWAP(A[i], A[j], TYPE);\
}
int main() {
    int a[5] = {5, 4, 3, 2, 1};
    	SORT(a, 5, int, >);
    	for (int i = 0; i < 5; i++)
        	printf("%d ", a[i]);
    return 0;
}
 