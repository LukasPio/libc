#include <assert.h>
#include "math.h"

int main(void)
{
    /* Basic */

    assert(fabs(-5.0) == 5.0);
    assert(fabs(3.0) == 3.0);

    assert(fmod(10.0, 3.0) == 1.0);
    assert(remainder(10.0, 3.0) == 1.0);

    /* Rounding */

    assert(floor(3.9) == 3.0);
    assert(floor(-3.1) == -4.0);

    assert(ceil(3.1) == 4.0);
    assert(ceil(-3.9) == -3.0);

    assert(trunc(3.9) == 3.0);
    assert(trunc(-3.9) == -3.0);

    assert(round(3.4) == 3.0);
    assert(round(3.5) == 4.0);

    /* Powers and roots */

    assert(sqrt(25.0) == 5.0);
    assert(cbrt(27.0) == 3.0);

    assert(pow(2.0, 0.0) == 1.0);
    assert(pow(2.0, 3.0) == 8.0);

    /* Exponentials and logarithms */

    assert(exp(0.0) == 1.0);
    assert(exp2(3.0) == 8.0);

    assert(log(1.0) == 0.0);
    assert(log10(1000.0) == 3.0);
    assert(log2(8.0) == 3.0);

    /* Trigonometric */

    assert(sin(0.0) == 0.0);
    assert(cos(0.0) == 1.0);
    assert(tan(0.0) == 0.0);

    assert(asin(0.0) == 0.0);
    assert(acos(1.0) == 0.0);
    assert(atan(0.0) == 0.0);
    assert(atan2(0.0, 1.0) == 0.0);

    /* Hyperbolic */

    assert(sinh(0.0) == 0.0);
    assert(cosh(0.0) == 1.0);
    assert(tanh(0.0) == 0.0);

    /* Miscellaneous */

    assert(hypot(3.0, 4.0) == 5.0);

    return 0;
}