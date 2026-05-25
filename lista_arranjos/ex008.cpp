// Escreva um programa que preenche dois vetores, A e B, com inteiros positivos lidos do teclado e
// preenche um terceiro vetor C em que cada elemento é igual à soma dos elementos correspondentes dos
// vetores recebidos. Por fim o programa deve imprimir C.

#include <iostream>
using namespace std;

int main () {
    int vetorA[5], vetorB[5], vetorC[5];

    for (int i = 0; i < 5; i++) {
        cout << "Insira um inteiro para preencher o vetor A: ";
        cin >> vetorA[i];
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Insira um inteiro para preencher o vetor B: ";
        cin >> vetorB[i];
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << vetorC[i] << " ";
    }

return 0;
}