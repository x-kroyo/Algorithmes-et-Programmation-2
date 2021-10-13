#include <stdio.h>
#include <math.h>

main () {

  	// Les réels de l'équation ax² + bx + c = 0
    float a, b, c;
  
  	// Le descriminent
  	float des
      
    // Les deux solutions de l'équation
    float x_1, x_2;

  	// Entrer les trois 
    printf("Entrer le nombre a != 0 \n");
    scanf("%f", &a);
    printf("Entrer le nombre b != 0 \n");
    scanf("%f", &b);
    printf("Entrer le nombre c != 0 \n");
    scanf("%f", &c);
  
  	// Calcule de descriminent b² - 4ac
    des = pow(b, 2) - 4*a*c;

    if (des < 0) {
        printf("L'equation n'admet pas de solutions");
    } else {
        if(des == 0) {
            x_1 = -b/(2*a);
            printf("L' equation admet une seule solution, x_1 = %f", x_1);
        } else {
            x_1 = (-b + sqrt(des))/(2*a);
            x_2 = (-b - sqrt(des))/(2*a);
            printf("L' equation admet deux solutions, x_1 = %f, x_2 = %f", x_1, x_2);
        }
    }


}