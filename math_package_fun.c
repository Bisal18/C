#include <stdio.h>
#include <math.h>
 
int main() {
    double x = 9.0, y = 2.0;
 
    // Power and Root Functions
    printf("sqrt(%lf) = %lf\n", x, sqrt(x));  // Square root
    printf("pow(%lf, %lf) = %lf\n", x, y, pow(x, y));  // Power function
 
    // Trigonometric Functions (input in radians)
    double angle = M_PI / 4;  // 45 degrees in radians
    printf("sin(%lf) = %lf\n", angle, sin(angle));
    printf("cos(%lf) = %lf\n", angle, cos(angle));
    printf("tan(%lf) = %lf\n", angle, tan(angle));
 
    // Inverse Trigonometric Functions
    printf("asin(0.5) = %lf\n", asin(0.5));
    printf("acos(0.5) = %lf\n", acos(0.5));
    printf("atan(1) = %lf\n", atan(1));
 
    // Hyperbolic Functions
    printf("sinh(%lf) = %lf\n", x, sinh(x));
    printf("cosh(%lf) = %lf\n", x, cosh(x));
    printf("tanh(%lf) = %lf\n", x, tanh(x));
 
    // Logarithm and Exponential Functions
    printf("log(%lf) = %lf\n", x, log(x));  // Natural log (ln)
    printf("log10(%lf) = %lf\n", x, log10(x));  // Log base 10
    printf("exp(%lf) = %lf\n", x, exp(x));  // e^x
 
    // Rounding Functions
    printf("ceil(%.2lf) = %lf\n", 2.3, ceil(2.3));  // Rounds up
    printf("floor(%.2lf) = %lf\n", 2.7, floor(2.7));  // Rounds down
    printf("round(%.2lf) = %lf\n", 2.5, round(2.5));  // Rounds to the nearest integer
 
    // Absolute Value
    printf("fabs(%lf) = %lf\n", -5.7, fabs(-5.7));  // Floating-point absolute value
 
    // Modulus and Remainder Functions
    printf("fmod(%lf, %lf) = %lf\n", x, y, fmod(x, y));  // Remainder of x/y
 
    return 0;
}

