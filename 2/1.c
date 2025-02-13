#include <stdio.h>


#define DEBUG

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


void findSumAndPrint(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            sum += a[i];  
            #ifdef DEBUG
            	printf("Element at index %d = %d\n", i, a[i]);
            #endif
        }
    }

    
    printf("Sum of elements at indices divisible by 3: %d\n", sum);
}

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    	scanf("%d", &n);

    int a[n]; 

    printf("Enter the elements of the array:\n");
    	for (int i = 0; i < n; i++) {
        	scanf("%d", &a[i]);
    	}

    
    bubbleSort(a, n);
 
    #ifdef DEBUG
    	printf("Sorted array: ");
    		for (int i = 0; i < n; i++) {
        		printf("%d ", a[i]);
    		}
    	printf("\n");
    #endif

    findSumAndPrint(a, n);

    return 0;
}
