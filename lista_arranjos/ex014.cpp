// Escreva um programa que leia 20 valores inteiros e os armazene em um arranjo A. Em seguida
// preencha outros dois arranjos B e C com os valores pares e ímpares, respectivamente, de A.
// Por fim, o programa deve imprimir A, B e C.


#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int vetorA[20], vetorB[20], vetorC[20];
    int tamanhoB = 0, tamanhoC = 0;

        for (int i = 0; i < 20; i++) {
            cout << "Preencha o vetor: ";
            cin >> vetorA[i];

                if (vetorA[i] % 2 == 0) {
                    vetorB[tamanhoB] = vetorA[i];
                    tamanhoB++;
                }
                else {
                    vetorC[tamanhoC] = vetorA[i];
                    tamanhoC++;
                }
        }

    cout << endl;
    
    cout << "Vetor A: " << endl;
    for (int i = 0; i < 20; i++) {
        cout << setw(3) << vetorA[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: " << endl;
    for (int i = 0; i < tamanhoB; i++) {
        cout << setw(3) << vetorB[i] << " ";
    }
    cout << endl;

    cout << "Vetor C: " << endl;
    for (int i = 0; i < tamanhoC; i++) {
        cout << setw(3) << vetorC[i] << " ";
    }


return 0;
}