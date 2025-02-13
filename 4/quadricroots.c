#include "quadraticroots.h"
#include <math.h>

Roots calculateRoots(long double a, long double b, long double c) {
    Roots result;
    long double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant < 0) {
        result.firstRoot = 0;
        result.secondRoot = 0;
        result.isImaginary = 1;
    } else {
        result.firstRoot = (-b + sqrtl(discriminant)) / (2 * a);
        result.secondRoot = (-b - sqrtl(discriminant)) / (2 * a);
        result.isImaginary = 0;
    }
    return result;
}
