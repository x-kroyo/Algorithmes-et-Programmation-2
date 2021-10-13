#include <stdio.h>
#include <math.h>

int main() {

    float e = 2, old, fact = 1;

    int p = 2;

    do {
        old = e;
        fact *= p;
        e += 1 / fact;
        p++;
    } while (fabs(e - old) >= 0.01 && p <= 100);

    printf("e = %f", e);

}
