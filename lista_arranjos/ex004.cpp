// Modifique o exercício anterior de forma que o conteúdo de vet1 seja copiado para vet2 de forma invertida. Por exemplo:
// vet1 = 1 5 0 4 9 vet2 = 9 4 0 5 1
// Por fim, o programa deve imprimir vet1 e vet2.

#include <iostream>
using namespace std;

int main () {


    int vet1[5], vet2[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite um valor inteiro: ";
        cin >> vet1[i];
    }


    for (int i = 0; i < 5; i++) {
        vet2[i] = vet1[4 - i];
    }

    for (int i = 0; i < 5; i++) {
        cout << vet1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << vet2[i] << " ";
    }

return 0;
}