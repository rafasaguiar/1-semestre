// Escreva um programa que recebe 20 valores inteiros positivos e armazena 10 desses valores no
// vetor A e 10 no vetor B. Em seguida, o programa deve preencher um terceiro vetor C de acordo com os
// seguintes critérios:
// Ci deverá receber 1 quando Ai for maior que Bi ;
// Ci deverá receber 0 quando Ai for igual a Bi ;
// Ci deverá receber -1 quando Ai for menor que Bi .
// Por fim, o programa deve imprimir A, B e C.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int vetorA[20], vetorB[20], vetorC[20];

    for (int i = 0; i < 20; i++) {
        cout << "Insira um valor inteiro para preencher A: ";
        cin >> vetorA[i];
    }

    cout << endl;

    for (int i = 0; i < 20; i++) {
        cout << "Insira um valor inteiro para preencher B: ";
        cin >> vetorB[i];
    }

    for (int i = 0; i < 20; i++) {
        if (vetorA[i] > vetorB[i]) {
            vetorC[i] = 1;
        }

        else if (vetorA[i] == vetorB[i]) {
            vetorC[i] = 0;
        }

        else {
            vetorC[i] = -1;
        }
    }

    for (int i = 0; i < 20; i++) {
        cout << setw(3) << vetorA[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 20; i++) {
        cout << setw(3) << vetorB[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 20; i++) {
        cout << setw(3) << vetorC[i] << " ";
    }

return 0;
}