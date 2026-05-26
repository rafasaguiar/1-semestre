// Escreva um programa que recebe 20 valores inteiros positivos do teclado e armazena 10 desses
// valores no vetor A e 10 no vetor B. O programa deve preencher um terceiro vetor C que é a intersecção
// de A e B.
// Por fim, o programa deve imprimir A, B e C.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int vetorTotal[20], vetorA[10], vetorB[10], vetorC[20];
    int tamanhoC = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Preencha o vetor total: ";
        cin >> vetorTotal[i];
    }

    for (int i = 0; i < 10; i++) {
        vetorA[i] = vetorTotal[i];
    }

    for (int i = 0; i < 10; i++) {
        vetorB[i] = vetorTotal [i + 10];
    }

    for (int i = 0; i < 10; i++) { // roda o vetor A 

        for (int j = 0; j < 10; j++) { // roda o vetor B

            if (vetorA[i] == vetorB[j]) {
                vetorC[tamanhoC] = vetorA[i];
                tamanhoC++;
                break;
            }

        }

    }

    cout << endl;

    cout << "Vetor A:" << endl;
    for (int i = 0; i < 10; i++) {
    cout << setw(3) << vetorA[i] << " ";
    }

    cout << endl;

    cout << "Vetor B:" << endl;
    for (int i = 0; i < 10; i++) {
    cout << setw(3) << vetorB[i] << " ";
    }

    cout << endl;

    cout << "Vetor C:" << endl;
    for (int i = 0; i < tamanhoC; i++) {
    cout << setw(3) << vetorC[i] << " ";
    }

return 0;
}