#include	"gulyaev.h"
#include	<cmath>
double absValue(double x) {
    return abs(x);
}
int sign(double x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}
double clamp(double x, double lo, double hi) {
    if (x < lo) return lo;
    if (x > hi) return hi;
    return x;
}