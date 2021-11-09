
#include <stdio.h>

int factoriel (int n) {

    int fact = 1, i;
    for (i = n;i > 1;i--) {
        fact *= i;
    }
    return fact;

}

float puissance (float x, int n) {
    float p = 1;
    while(n--){
        p *= x;
    }
    return p;
}

void exponentiel(float x) {

    float prec; // Variable qui porte la valeur précedent de exp(x)

    float e = 1+x; // La variable du exp(x)
    int n = 2;
    do {
        prec = e;
        e += puissance(x, n) / (float) factoriel(n);
        n++;
    } while(fabs(e-prec) >= 0.001);

    printf("e(%f) = %f", x,e);

}

void main () {

    float x;

    printf("Entrer le réel x\n");
    scanf("%f", &x);
    exponentiel(x);

}
