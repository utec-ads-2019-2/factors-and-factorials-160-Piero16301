#include <bits/stdc++.h>

using namespace std;

int main() {

    long numero, i, fila, cuenta, j, temporal;
    long numerosPrimos [] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    while (scanf ("%ld", &numero)) {
        if (numero == 0) {
            return 0;
        }
        temporal = numero;
        long conteoPrimos [25] = {0};
        while (numero != 1) {
            i = numero;
            j = 0;
            while (i > 1) {
                cuenta = 0;
                while (i % numerosPrimos [j] == 0) {
                    i /= numerosPrimos [j];
                    cuenta++;
                }
                conteoPrimos [j] += cuenta;
                j++;
            }
            numero--;
        }

        for (i = 24; i >= 0; i--) {
            if (conteoPrimos [i] != 0)
                break;
        }
        j = i;
        printf("%3ld! =", temporal);
        if (j >= 15) {
            fila = 0;
        } else {
            fila = 15;
        }
        for (i = 0; i <= j; i++) {
            printf("%3ld", conteoPrimos [i]);
            fila++;
            if (fila == 15) {
                printf("\n%6c",' ');
            }
        }
        printf("\n");
    }

    return 0;
    
}