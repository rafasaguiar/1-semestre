// Faça um programa para criar um vetor A com 100 elementos inteiros e em seguida chamar um programa
// que preencha um vetor B de mesmo tipo e tamanho. Cada elemento do vetor B deverá ser o elemento
// correspondente de A multiplicado por 2. Por exemplo, B[0] = A[0] * 2; B[1] = A[2] * 2; ...; B[99] = A[99] * 2
// Por fim, o programa deve imprimir A e B.

#include <iostream>
using namespace std;

int main () {

    int vetorA[100];
    int vetorB[100];

    for (int i = 0; i < 100; i++) {
        cout << "Insira um valor inteiro: ";
        cin >> vetorA[i];
    }

    for (int i = 0; i < 100; i++) {
        vetorB[i] = 2 * vetorA[i];
    }

    for (int i = 0; i < 100; i++) {
        cout << vetorA[i] << " " ;
    }

    cout << endl;

    for (int i = 0; i < 100; i++) {
        cout << vetorB[i] << " ";
    }

return 0;
}