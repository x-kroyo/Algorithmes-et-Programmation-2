
#include<stdio.h>
#include<math.h>

int iHeure, iMinute, iSeconde;

void affiche_heure() {
    printf("Il est %d heure(s) %d minute(s) %d seconde(s)", iHeure, iMinute, iSeconde);
}

void saisir_heure(int iH, int iM, int iS) {
    printf("Entrer l'heure \n");
    scanf("%d", &iH);
    printf("Entrer les minutes \n");
    scanf("%d", &iM);
    printf("Entrer les secondes \n");
    scanf("%d", &iS);

    iHeure = iH;
    iMinute = iM;
    iSeconde = iS;

    if (iHeure >= 24 || iMinute >= 60 || iSeconde >= 60) {
        printf("Les entreés sont invalides \n");
        saisir_heure(iHeure, iMinute, iSeconde);
    }
}

void tick () {

    // Incrémentrer avec une seconde
    iSeconde++;

    iMinute += iSeconde / 60;
    iSeconde %= 60;

    iHeure += iMinute / 60;
    iMinute %= 60;

    if (iHeure == 24)
        iHeure = 0;

}

main () {
    saisir_heure(iHeure, iMinute, iSeconde);
    tick();
    affiche_heure();
}
