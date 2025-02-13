#include <stdio.h>
#include "quadraticroots.h"

int main() {
    int integerA = 3, integerB = 4, integerC = 1;
    Roots intRoots = calculateRoots(integerA, integerB, integerC);

    float floatA = 1.4, floatB = 3.5, floatC = 2.1;
    Roots floatRoots = calculateRoots(floatA, floatB, floatC);

    double doubleA = 5.1, doubleB = 3.2, doubleC = 1.7;
    Roots doubleRoots = calculateRoots(doubleA, doubleB, doubleC);

    long double longDoubleA = -1.1, longDoubleB = 2.2, longDoubleC = 3.3;
    Roots longDoubleRoots = calculateRoots(longDoubleA, longDoubleB, longDoubleC);

    printf("Integer Roots: root1 = %Lf, root2 = %Lf, imaginary = %d\n", intRoots.firstRoot, intRoots.secondRoot, intRoots.isImaginary);
    printf("Float Roots: root1 = %Lf, root2 = %Lf, imaginary = %d\n", floatRoots.firstRoot, floatRoots.secondRoot, floatRoots.isImaginary);
    printf("Double Roots: root1 = %Lf, root2 = %Lf, imaginary = %d\n", doubleRoots.firstRoot, doubleRoots.secondRoot, doubleRoots.isImaginary);
    printf("Long Double Roots: root1 = %Lf, root2 = %Lf, imaginary = %d\n", longDoubleRoots.firstRoot, longDoubleRoots.secondRoot, longDoubleRoots.isImaginary);

    return 0;
}
