#include <stdio.h>
#include <math.h>

int main() {

    float a; // Le réel à calculer son racine

    // Lire le réel
    printf("Entrer la valeur de a pour calculer son racine carre \n");
    scanf("%f", &a);

    float u = 1; // La valeur n_ème de la suite
    float old; // La variable à stocker la valeur précedent de du variable {u}

    do {
        old = u;
        u = 0.5 * (old + a / u);
    } while(fabs(u - old) >= 0.001);

    printf("La valeur du racine carré du %f est: %f", a, u);

}
