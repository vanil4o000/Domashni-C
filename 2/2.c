#include <stdio.h>


#define ARRAY_SIZE 8


int main() {
    
    #if defined(ARRAY_SIZE) && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
        
        int a[ARRAY_SIZE];
	    for (int i = 0; i < ARRAY_SIZE; i++) {
            	a[i] = 1 << i;  
            }
	
        
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", a[i]);
        }

    #else
    	printf("The massive is more than 10 or less than 1\n");
    
#endif

    return 0;
}
