// Faça um programa que mostre uma tabela de conversão de graus fahrenheit para centígrados para
// todos valores inteiros de 32 a 80 farenheit, mostrando o valor em centígrados e ao lado o valor em
// fahrenheit. A conversão de graus fahrenheit para centígrados é obtida por fahrenheit=
// (9*centígrados/5)+32.

#include <iostream>
using namespace std;

int main () {
    double centigrados;

    for (int i = 32; i <= 80; i++) {
        centigrados = (5.0 * (i- 32.0))/9.0;
        cout << i << " F = " << centigrados << " C" << endl;
    }

return 0;
}
