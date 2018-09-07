
#include <stdio.h>
#include <math.h>
//autor: Bruno Portilla

int main() {
    int num;    //asigno las variables
    double pi = 0;

    // le pido al usuario cuantas decimales quiere
    printf("Enter the number of decimals you wantto see of pi: ");
    scanf("%d", &num);

    for (int k = 0; k < num; k++) {
        //formula para sacar cierto numero de decimales de pi
        pi+= pow(16,-k) * (4.0 / (8.0*k+1) - 2.0/(8*k+4) - 1/(8.0*k+5) - 1.0/(8*k+6));
    }
    //pongo el resultado en pantalla
    printf("Pi with %d decimals is: %.*lf", num, num, pi);

    return 0;
}