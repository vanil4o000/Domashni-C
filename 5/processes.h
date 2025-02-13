#pragma once

#define MAX_PROCESS_COUNT 5

typedef struct {
    unsigned long processId;
    char processName[31];
} Process;

extern Process processes[MAX_PROCESS_COUNT];
extern int processesCount;

unsigned long createNewProcess(char *name);
void stopProcess(unsigned long id);
