#include <stdio.h>

	#if defined(_WIN32) || defined(_WIN64)
	void bubbleSort(int a[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
	}

	#elif defined(__linux__)
	void directSelection(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mi = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[mi])
                mi = j;
        int t = a[i];
        a[i] = a[mi];
        a[mi] = t;
    		}
	}
	#elif defined(__APPLE__) || defined(__MACH__)
	void directInsertion(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int k = a[i];
        int j = i - 1;
        while (j && a[j] > k) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    	}
	}
	#else
    	void reverseArray(int a[], int n) {
        for (int i = 0; i < n / 2; i++) {
            int temp = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = temp;
        	}
    	}
	#endif


int main() {
    int a[100], n;

    
    printf("Number of elements: ");
    scanf("%d", &n);

    // Read the array elements
    printf("Elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    #if defined(_WIN32) || defined(_WIN64)
        bubbleSort(a, n);
        printf("Array sorted using Bubble Sort:\n");
    #elif defined(__linux__)
        directSelection(a, n);
        printf("Array sorted using Direct Selection Sort:\n");
    #elif defined(__APPLE__) || defined(__MACH__)
        directInsertion(a, n);
        printf("Array sorted using Direct Insertion Sort:\n");
    #else
        reverseArray(a, n);
        printf("Array reversed:\n");
    #endif

    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}