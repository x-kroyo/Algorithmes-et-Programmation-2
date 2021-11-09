#include <stdio.h>
#include <math.h>

float lecture () {
    float r;
    scanf("%f", &r);
    return r;
}

float delta (float a, float b, float c) {
    return(b*b - 4*a*c);

}

int NombreRacine(float det) {

    if (det == 0)
        return(1);
    else if(det < 0)
        return(0);

    return(2);

}

float Racine1 (float a, float b, float c) {

    return (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);

}

float Racine2 (float a, float b, float c) {

    return (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);

}

void AfficheRacine(float a, float b, float c) {

    int num = NombreRacine(delta(a,b,c));

    switch(num) {

        case 0:
            printf("L'equation n'admet pas de solution");
            break;

        case 1:
            printf("L'equation admet une seule solution, x = %f", Racine1(a,b,c));
            break;

        case 2:
            printf("L'equation admet une seule solution, x1 = %f et x2 = %f", Racine1(a,b,c), Racine2(a,b,c));
            break;
    }

}

main () {

    float a = lecture(),b = lecture(),c = lecture();

    AfficheRacine(a,b,c);


}
