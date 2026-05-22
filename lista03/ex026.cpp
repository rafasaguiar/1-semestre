#include <iostream>
using namespace std;

int main () {
    int numero;
    int negativos = 0, positivos = 0;

    do {
        cout << "Insira um numero: ";
        cin >> numero;

            if (numero < 0) {
                negativos++;
            }

            if (numero > 0) {
                positivos++;
            }
    } while (numero != 0);

    cout << "Quantidade de positivos: " << positivos << endl;
    cout << "Quantidade de negativos: " << negativos << endl;

return 0;
}