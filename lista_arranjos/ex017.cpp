#include <iostream>
using namespace std;

int main () {

    int vetor[20];
    int alvo;

    for (int i = 0; i < 20; i++) {
        cout << "Preencha o vetor: ";
        cin >> vetor[i];
    }

    cout << "Defina um valor alvo a ser localizado no vetor: ";
    cin >> alvo;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 19; j++) {
            if (vetor[j] > vetor [j + 1]) {
            int aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
            }
        }
    }

    cout << "Vetor ordenado: " << endl;
    for (int i = 0; i < 20; i++) {
        cout << vetor[i] << " ";
    }

    int inicio = 0;
    int final = 19;
    int meio;
    int posicaoEncontrada = -1;

    cout << endl;

    while (inicio <= final) {
        meio = (inicio + final) / 2;

        if (vetor[meio] == alvo) {
            posicaoEncontrada = meio;
            break;
        }

        else if (alvo < vetor[meio]) {
            final = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }

    if (posicaoEncontrada != -1) {
        cout << "O alvo foi encontrado na posicao: " << posicaoEncontrada;
    }

    else {
        cout << "O alvo nao foi localizado.";
    }

return 0;
}