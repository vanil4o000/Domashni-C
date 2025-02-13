#ifndef ROOT_CALCULATOR_H
#define ROOT_CALCULATOR_H

typedef struct {
    long double firstRoot, secondRoot;
    int isImaginary;
} Roots;

Roots calculateRoots(long double a, long double b, long double c);

#endif