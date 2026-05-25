#include <iostream>
using namespace std;

int main () {
    int soma = 0;
    int tamanho;

    cout << "Digite o tamanho do vetor de inteiros: " << endl;
    cin >> tamanho;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor para a posicao " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }

    cout << "Soma dos elementos = " << soma << endl;

return 0;
}