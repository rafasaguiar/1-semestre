// Escreva um programa que recebe 20 valores inteiros positivos do teclado e armazena 10 desses
// valores no vetor A e 10 no vetor B. O programa deve preencher um terceiro vetor, C, que é a junção de A
// e B. Os primeiros elementos de C serão os elementos de A e os últimos elementos de C serão os
// elementos de B.
// Por fim, o programa deve imprimir A, B e C.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int vetorA[10], vetorB[10], vetorC[20];

    for (int i = 0; i < 10; i++) {
        cout << "Preencha o vetor A: ";
        cin >> vetorA[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Preencha o vetor B: ";
        cin >> vetorB[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i];
    }

    for (int i = 0; i < 10; i++) {
        vetorC[i + 10] = vetorB[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << setw(3) << vetorA[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << setw(3) << vetorB[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < 20; i++) {
        cout << setw(3) << vetorC[i] << " ";
    }
    cout << endl;



return 0;
}