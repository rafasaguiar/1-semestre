#include <iostream>
using namespace std;

int main () {
    int nota;
    int otimo = 0, regular = 0, ruim = 0, contador = 0;
    float percentualotimo, percentualregular, percentualruim; 

    do {
        cout << "Insira a nota (1 - otimo / 2 - regular / 3 - ruim): ";
        cin >> nota;

        if (nota < 1 || nota > 3) {
            break;
        }

        if (nota == 1) {
            otimo++;
        }

        if (nota == 2) {
            regular++;
        }

        if (nota == 3) {
            ruim++;
        }

    contador++;
    } while (nota == 1 || nota == 2 || nota == 3);

    if (contador > 0) {
        percentualotimo = ((float)otimo/(float)contador) * 100;
        percentualregular = ((float)regular/(float)contador) * 100;
        percentualruim = ((float)ruim/(float)contador) * 100;
    }

    cout << "Numero de entrevistados: " << contador << endl;
    cout << endl;
    cout << "Percentual de 'otimo': " << percentualotimo << "%" << endl;
    cout << "Percentual de 'regular': " << percentualregular << "%" << endl;
    cout << "Percentual de 'ruim': " << percentualruim << "%" << endl;

return 0;
}