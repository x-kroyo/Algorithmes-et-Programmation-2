#include <stdio.h>
#define max 50

void lire(int A[], int d) {

    printf("Entrer les elements du tableau \n");
    for(int i = 0;i<d;i++) {
        printf("Entrer l'element %d \n", i+1);
        scanf("%d", &A[i]);
    }

}

void afficher(int A[], int d) {
    printf("Affichage des elements du tableau \n");
    for(int i = 0;i<d;i++) {
        printf("A[%d] = %d \n", i+1, A[i]);
    }
    printf("\n");
}

void trier(int A[], int d) {

    int t, min, i, j;
    for(i = 0;i<d-1;i++) {
        min=i;
        for(j = i+1;j < d;j++) {
            if (A[min] > A[j]){
                min = j;
            }
        }
        if(min != i) {
            t = A[i];
            A[i] = A[min];
            A[min] = t;
        }
    }



}

int rechercher (int A[], int d, int elt) {

    int m, debut = 0, fin = d-1;

    do {
        m = (debut + fin)/2;
        if (A[m] == elt) {
            return 1;
        } else if (elt < A[m]) {
            fin = m -1;
        } else {
            debut = m + 1;
        }
    } while(debut <= fin);

    return 0;
}

int main () {

    int A[max];
    int d;
    printf("Entrer la dimension du tableau \n");
    scanf("%d", &d);

    lire(A,d);
    trier(A,d);
    afficher(A,d);

    int elt;
    printf("Entrer l'element à rechercher \n");
    scanf("%d", &elt);
    if(rechercher(A, d, elt) == 1) {
        printf("L'element existe dans le tableau");
    } else {
        printf("L'element n'existe pas dans le tableau");
    }

    return 0;

}
