#include <iostream>
#define D 1200
#define lambda 0.0006808

using namespace std;

float calc_a (float L) {
    float a;
    return (2 * D * lambda) / (L * 10);

}

void calc(float L) {
    printf("La valeur calculé du a est %f \n", calc_a(L));
}

int main () {

    float L;
    while(cin >> L && L != 1) {
        calc(L);
    }

    return 0;

}
