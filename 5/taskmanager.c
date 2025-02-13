#include <stdio.h>
#include "processes.h"

Process processes[MAX_PROCESS_COUNT];
int processesCount = 0;

void printMenu() {
    printf("1. Show all processes\n");
    printf("2. Create new process\n");
    printf("3. Stop a process\n");
    printf("4. Exit\n");
    printf("Put the command: ");
}

void showProcesses() {
    if (processesCount == 0) {
        printf("No running processes.\n");
    } else {
        for (int i = 0; i < processesCount; i++) {
            printf("ID: %lu, Name: %s\n", processes[i].processId, processes[i].processName);
        }
    }
}

void createProcess() {
    char name[31];
    printf("Type the process name: ");
    scanf("%30s", name);
    unsigned long id = createNewProcess(name);
    if (id == 0) {
        printf("Cannot create process. Maximum limit reached.\n");
    } else {
        printf("Process created with ID %lu.\n", id);
    }
}

void stopProcess() {
    unsigned long id;
    printf("Type the process ID to stop: ");
    scanf("%lu", &id);
    stopProcess(id);
}

int main() {
    int choice;
    while (1) {
        printMenu();
        scanf("%d", &choice);
        if (choice == 1) {
            showProcesses();
        } else if (choice == 2) {
            createProcess();
        } else if (choice == 3) {
            stopProcess();
        } else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("No command from the listed have been used. Try again.\n");
        }
    }
    return 0;
}
