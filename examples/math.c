#include <stdio.h>
#include "math.h"

int main(void)
{
    printf("========== Basic ==========\n");
    printf("fabs(-5.4) = %.2f\n", fabs(-5.4));
    printf("fmod(10.0, 3.0) = %.2f\n", fmod(10.0, 3.0));
    printf("remainder(10.0, 3.0) = %.2f\n\n", remainder(10.0, 3.0));

    printf("========== Rounding ==========\n");
    printf("floor(3.8) = %.2f\n", floor(3.8));
    printf("ceil(3.2) = %.2f\n", ceil(3.2));
    printf("trunc(-3.8) = %.2f\n", trunc(-3.8));
    printf("round(3.5) = %.2f\n\n", round(3.5));

    printf("========== Powers and Roots ==========\n");
    printf("sqrt(25.0) = %.2f\n", sqrt(25.0));
    printf("cbrt(27.0) = %.2f\n", cbrt(27.0));
    printf("pow(2.0, 8.0) = %.2f\n\n", pow(2.0, 8.0));

    printf("========== Exponentials and Logarithms ==========\n");
    printf("exp(1.0) = %.4f\n", exp(1.0));
    printf("exp2(8.0) = %.2f\n", exp2(8.0));
    printf("log(M_E) = %.4f\n", log(M_E));
    printf("log10(1000.0) = %.2f\n", log10(1000.0));
    printf("log2(8.0) = %.2f\n\n", log2(8.0));

    printf("========== Trigonometric ==========\n");
    printf("sin(M_PI / 2) = %.2f\n", sin(M_PI / 2));
    printf("cos(0.0) = %.2f\n", cos(0.0));
    printf("tan(M_PI / 4) = %.2f\n", tan(M_PI / 4));
    printf("asin(1.0) = %.2f\n", asin(1.0));
    printf("acos(1.0) = %.2f\n", acos(1.0));
    printf("atan(1.0) = %.2f\n", atan(1.0));
    printf("atan2(1.0, 1.0) = %.2f\n\n", atan2(1.0, 1.0));

    printf("========== Hyperbolic ==========\n");
    printf("sinh(1.0) = %.4f\n", sinh(1.0));
    printf("cosh(1.0) = %.4f\n", cosh(1.0));
    printf("tanh(1.0) = %.4f\n\n", tanh(1.0));

    printf("========== Miscellaneous ==========\n");
    printf("hypot(3.0, 4.0) = %.2f\n", hypot(3.0, 4.0));

    return 0;
}