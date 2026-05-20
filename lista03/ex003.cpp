// Altere o programa anterior para que o usuário informe qual o valor inicial e o valor final em
// farenheit e informe também o intervalo entre estes valores para conversão (de um em um, de dois em
//dois, etc.)Altere o programa anterior para que o usuário informe qual o valor inicial e o valor final em
// farenheit e informe também o intervalo entre estes valores para conversão (de um em um, de dois em
// dois, etc.)

#include <iostream>
using namespace std;

int main () {
    int valorA, valorB, intervalo;
    double centigrados;

    cout << "Qual intervalo de valores voce gostaria de ver?" << endl;;
    cout << "Valor inicial: ";
    cin >> valorA;
    cout << "Valor final: ";
    cin >> valorB;

    while (valorA > valorB) {
        cout << "Digite na ordem, do inicial para o final:" << endl;
        cout << "Valor inicial: ";
        cin >> valorA;
        cout << "Valor final: ";
        cin >> valorB;
    }

    cout << "Qual intervalo interno entre valores? ";
    cin >> intervalo;

    while (intervalo <= 0) {
        cout << "Intervalo deve ser um valor inteiro positivo: ";
        cin >> intervalo;
    }

    for (int i = valorA; i <= valorB; i += intervalo) {
        centigrados = (5.0 * (i- 32.0))/9.0;
        cout << i << " F = " << centigrados << " C" << endl;
    }

return 0;
}
