// Faça um programa para criar um vetor A com 15 elementos inteiros e em seguida preencher um vetor B
// de mesmo tipo e tamanho. Cada elemento do vetor B deverá ser o elemento correspondente de A
// multiplicado por seu índice. Por fim, o programa deve imprimir A e B.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int vetorA[15], vetorB[15];

    for (int i = 0; i < 15; i++) {
        cout << "Digite um valor inteiro: ";
        cin >> vetorA[i];
    }

    for (int i = 0; i < 15; i++) {
        vetorB[i] = vetorA[i] * i;
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