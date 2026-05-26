#include <iostream>
using namespace std;

int main () {
    int vetorV[5];
    int menor = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Preencha o vetor V: ";
        cin >> vetorV[i];

            if (vetorV[i] < vetorV[menor]) {
                menor = i;
            }
    }

    cout << "O menor indice: " << menor << endl;

return 0;
}