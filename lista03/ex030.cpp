#include <iostream>
using namespace std;

int main () {
    int carros;
    float media;
    int somacarros = 0, dias = 0;

    do {
        cout << "Quantidade de carros produzidos: ";
        cin >> carros;
    
        if (carros < 0) {
            break;
        }

        somacarros = somacarros + carros;
        dias++;
    } while (carros >= 0);

    if (dias > 0) {
    media = (float)somacarros / (float)dias;
    }

    cout << "Quantidade de carros produzidos: " << somacarros << endl;
    cout << "Quantidade de dias: " << dias << endl;
    cout << "Media de carros produzidos por dia: " << media << endl;

return 0;
}