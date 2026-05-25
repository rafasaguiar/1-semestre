// Faça um programa para criar um vetor A com 15 elementos inteiros lidos do teclado e em seguida
// preencher um vetor B de mesmo tamanho de acordo com os seguintes critérios:
// Bi deverá receber 'a' quando Ai for menor que 7;
// Bi deverá receber 'b' quando Ai for igual a 7;
//Bi deverá receber 'c' quando Ai for maior que 7 e menor que 10;
// Bi deverá receber 'd' quando Ai for igual a 10; e
//Bi deverá receber 'e' quando Ai for maior que 10.
// O programa deverá então imprimir A e B.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int vetorA[15];
    char vetorB[15];

    for (int i = 0; i < 15; i++) {
        cout << "Insira um valor para preencher o vetor A: ";
        cin >> vetorA[i];
    }


    for (int i = 0; i < 15; i++) {

        if (vetorA[i] < 7) {
            vetorB[i] = 'a';
        }
        if (vetorA[i] == 7) {
            vetorB[i] = 'b';
        }
        if (vetorA[i] > 7 && vetorA[i] < 10) {
            vetorB[i] = 'c';
        }
        if (vetorA[i] == 10) {
            vetorB[i] = 'd';
        }
        if (vetorA[i] > 10) {
            vetorB[i] = 'e';
        }

    }

    for (int i = 0; i < 15; i++) {
        cout << setw(3) << vetorA[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 15; i++) {
        cout << setw(3) << vetorB[i] << " ";
    }

return 0;
}