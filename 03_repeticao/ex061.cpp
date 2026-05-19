#include <iostream>
using namespace std;

int main () {
    int paes;
    float compra;
    float total = 0;
    int contador = 1;

    cout << "Tabela fixa de precos - 1 a 50 produtos: ";
    while (contador <= 50) {
        total = total + 0.18;
        cout << contador << "- R$ " << total << endl;
        contador++;
    }

    contador = 1;
    total = 0;

    cout << "Quantos paes estao sendo comprados? ";
    cin >> paes;

    while (paes <= 0) {
        cout << "Digite um valor maior ou igual a 1: ";
        cin >> paes;
    }

    while (contador <= paes) {
        total = total + 0.18;
        contador++;
    }

    compra = paes * 0.18;

    cout << "Total da compra: " << compra << " reais." ;

return 0;
}