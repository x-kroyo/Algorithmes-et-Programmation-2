#include <stdio.h>
#include <math.h>

int D = 120;
float lambda = 632.8;

float __delta_a (int L, int m, float a) {

    return a*(m/(float)L + 0.1/(float) D);

}

float __a(int m, float L) {

    return (2 * D * lambda * m)/(L * 100000);

}

void session () {

    printf("\n\n");
    char answer;
    printf("Avant de commancer notre calcule, verifier les constantes a travailler avec :\n");
    printf("-> La distance D = %d cm\n", D);
    printf("-> La longueur d'onde est lambda = %.1f nm\n", lambda);
    printf("Vous voulez changer ces valeurs ou non ? (Y/n) ");
    scanf(" %c", &answer);
    if (answer == 'Y' || answer == 'y') {
        printf("D = ? in cm : ");
        scanf("%d", &D);
        printf("lambda = ? en nm : ");
        scanf("%f", &lambda);
    }

    int m;
    printf("\nEntrer l'ordre de reperage m, que vous avez calculer leur longeur L\n");
    scanf("%d", &m);

    int *L = (int*)malloc(sizeof(int)*m);

    printf("Entrer les valeurs des longeurs pour chanque m en cm \n");

    for (int i = 0;i < m;i++) {
        float l;
        printf("Pour m = %d, L = ", i+1);
        scanf("%f", &l);
        L[i] = l * 10;
    }

    float sum = 0, incerts = 0;

    printf("\nResultats: \n");
    for (int i = 0;i < m;i++) {
        float a = __a(i+1, L[i]);
        float delta = __delta_a(L[i], i+1, a);
        printf("Pour m = %d et L = %.1f cm, on a a = %f mm, incertitude: %lf\n", i+1, (float)L[i]/10, a, delta);
        sum += a;
        incerts += delta;
    }

    printf("La valeur moyenne de a est %f mm, incertitude : %f\n", sum/m, incerts/m);

}

int main () {

    printf("------------------------------\n");
    printf("  TP 01: Electromagnetisme     \n");
    printf("------------------------------\n\n");


    char answer;
    do {
        session();
        printf("\n\n On arrive à l'état finale. Vous voulez refaire ce processus ? (Y/n) ");
        scanf(" %c", &answer);
    } while(answer == 'Y' || answer == 'y');

    printf("\n-----------------------------------\n");
    printf("Merci pour votre utilisation ^_^\n");
    printf("----------------------------------\n");
    return 0;

}
