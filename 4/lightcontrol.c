#include <stdio.h>

int lightingState = 0;

void displayMenu() {
    printf("1. Toggle light\n");
    printf("2. Show state\n");
    printf("3. Exit\n");
}

void flipLight(int roomNumber) {
    lightingState ^= (1 << (roomNumber - 1));
}

int main() {
    int choice, room;
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter room number to toggle: ");
                scanf("%d", &room);
                if (room >= 1 && room <= 8) {
                    flipLight(room);
                } else {
                    printf("Invalid room number\n");
                }
                break;
            case 2:
                printf("Lights are on in rooms: ");
                for (int i = 0; i < 8; i++) {
                    if (lightingState & (1 << i)) {
                        printf("%d ", i + 1);
                    }
                }
                printf("\n");
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    
    return 0;
}
