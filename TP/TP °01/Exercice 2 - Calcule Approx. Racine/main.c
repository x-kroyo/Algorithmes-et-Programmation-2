#include <stdio.h>
#include <math.h>

int main() {

    float a; // Le r�el � calculer son racine

    // Lire le r�el
    printf("Entrer la valeur de a pour calculer son racine carre \n");
    scanf("%f", &a);

    float u = 1; // La valeur n_�me de la suite
    float old; // La variable � stocker la valeur pr�cedent de du variable {u}

    do {
        old = u;
        u = 0.5 * (old + a / u);
    } while(fabs(u - old) >= 0.001);

    printf("La valeur du racine carr� du %f est: %f", a, u);

}
