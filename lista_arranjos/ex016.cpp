#include <iostream>
using namespace std;

int main () {

    int vetor[20];
    int alvo;
    int alvosEncontrados = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Preencha o vetor: ";
        cin >> vetor[i];
    }

    cout << "Defina um valor alvo a ser localizado no vetor: ";
    cin >> alvo;

    for (int i = 0; i < 20; i++) {
        if (vetor[i] == alvo) {
            cout << "O valor alvo foi encontrado na posicao " << i << endl;
            alvosEncontrados++;
        }
    }

    if (alvosEncontrados == 0) {
        cout << "Nao foi encontrado o valor alvo dentro do vetor." << endl;
    }

return 0;
}