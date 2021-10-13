#include <stdio.h>
#include <math.h>

int main() {

    float a;

    printf("Entrer la valeur de a pour calculer son racine carre \n");
    scanf("%f", &a);

    float u = 1, old;

    do {
        old = u;
        u = 0.5 * (old + a / u);
    } while(fabs(u - old) >= 0.001);

    printf("La valeur du racine carré du %f est: %f", a, u);

}
