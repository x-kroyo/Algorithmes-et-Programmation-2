#include <stdio.h>
#include <math.h>

long double puissance (double x, int n) {
    long double p=1;
    while(n--)
        p *= x;
    return p;
}

long long int factoriel (int n) {
    long long int fact = 1;
    for (int i = 1;i<= n;i++) {
        fact *= i;
    }
    return fact;
}

main () {
    double x = 10;
    printf("Entrer le reel \n");
    scanf("%lf", &x);
    long double e = 1, old;
    long int p = 1;
    do {
        printf("%d \n", p);
        old = e;
        e += puissance(x, p) / factoriel(p);
        p++;
    } while(fabs(e - old) >= 0.1);

    printf("exp(%Lf) = %Lf", x, e);

}
