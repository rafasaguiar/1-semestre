// Adaptar o programa desenvolvido acima para que ela calcule o percentual dos valores positivos e
// negativos em relação ao total de valores fornecidos.

#include <iostream>
using namespace std;

int main () {
    int numero;
    float negativos = 0, positivos = 0, total = 0;
    float percentualpos = 0, percentualneg = 0;

    do {
        cout << "Insira um numero: ";
        cin >> numero;

            if (numero < 0) {
                negativos++;
                total++;
            }

            if (numero > 0) {
                positivos++;
                total++;
            }
    } while (numero != 0);

    if (total > 0) {
    percentualpos = (float)(positivos/(total)) * 100.00;
    percentualneg = (float)(negativos/(total)) * 100.00;
    }

    cout << "Quantidade de positivos: " << positivos << endl;
    cout << "Quantidade de negativos: " << negativos << endl;
    cout << "Total: " << total << endl;
    cout << endl;
    cout << "Percentual de positivos sobre o total: " << percentualpos << "%" << endl;
    cout << "Percentual de negativos sobre o total: " << percentualneg << "%" << endl;
    cout << endl;

return 0;
}