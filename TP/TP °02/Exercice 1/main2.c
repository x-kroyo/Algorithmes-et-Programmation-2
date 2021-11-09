#include <stdio.h>
#include <math.h>

int iHeure, iSeconde, iMinute;


void saisir_heure(int iH, int iM, int iS) {

    printf("Entrer les heures:\n");
    scanf("%d", &iH);
    printf("Entrer les minutes:\n");
    scanf("%d", &iM);
    printf("Entrer les secondes:\n");
    scanf("%d", &iS);

    iHeure = iH;
    iMinute = iM;
    iSeconde = iS;

}

void affiche_heure() {
    printf("Il est %d heure(s) %d minute(s) %d secode(s)", iHeure, iMinute, iSeconde);
}

void tick () {

    iSeconde++;

    if (iSeconde == 60) {
        iSeconde = 0;
        iMinute++;
    }
    if (iMinute == 60) {
        iMinute = 0;
        iHeure++;
    }
    if (iHeure == 24) {
        iHeure = 0;
    }

}


void main () {

    saisir_heure(iHeure, iMinute, iSeconde);
    tick();
    affiche_heure();

}
