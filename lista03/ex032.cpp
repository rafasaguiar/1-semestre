// Faça um programa que leia uma quantidade não determinada de números positivos. Calcule a média
// dos valores pares, a média de valores ímpares e a média geral dos números lidos. A leitura encerrará
// quando for digitado um valor menor ou igual a zero.

#include <iostream>
using namespace std;

int main () {
    int numero;
    int contador = 0;
    int impares = 0, pares = 0;
    int somaimpares = 0, somapares = 0, somageral = 0;
    float mediaimpares, mediapares, mediageral;

    do {
        cout << "Digite um numero: ";
        cin >> numero;

            if (numero <= 0) {
                break;
            }

            if (numero % 2 == 0) {
                somapares = somapares + numero;
                pares++;
            }

            if (numero % 2 != 0) {
                somaimpares = somaimpares + numero;
                impares++;
            }
        
        somageral = somageral + numero;
        contador++;

    } while (numero > 0);

    if (impares != 0) {
        mediaimpares = (float)somaimpares/(float)impares;
    }
    else {
        mediaimpares = 0;
    }

    if (pares != 0) {
        mediapares = (float)somapares/(float)pares;
    }
    else {
        mediapares = 0;
    }

    if (contador != 0) {
        mediageral = (float)somageral/(float)contador;
    }

    cout << "Quantidade de pares: " << pares << endl;
    cout << "Quantidade de impares: " << impares << endl;
    cout << endl;
    cout << "Media geral: " << mediageral << endl;
    cout << "Media dos pares: " << mediapares << endl;
    cout << "Media dos impares: " << mediaimpares << endl;


return 0;
}