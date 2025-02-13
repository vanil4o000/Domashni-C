#include "processes.h"
#include <string.h>

static unsigned long nextProcessId() {
    static unsigned long id = 1;
    return id++;
}

unsigned long createNewProcess(char *name) {
    if (processesCount >= MAX_PROCESS_COUNT) {
        return 0;
    }
    unsigned long id = nextProcessId();
    processes[processesCount].processId = id;
    strncpy(processes[processesCount].processName, name, 30);
    processes[processesCount].processName[30] = '\0'
    processesCount++;
    return id;
}

void stopProcess(unsigned long id) {
    int index = -1;
    for (int i = 0; i < processesCount; i++) {
        if (processes[i].processId == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Process with ID %lu not found.\n", id);
        return;
    }
    for (int i = index; i < processesCount - 1; i++) {
        processes[i] = processes[i + 1];
    }
    processesCount--;
}
