#include <iostream>
using namespace std;

int main () {
    float area, raio;

    do {
        cout << "Insira o raio do circulo: ";
        cin >> raio;

        if (raio > 0) {
        area = 3.14 * raio * raio;
        cout << area << " m2" << endl;
        }

    } while (raio > 0);

return 0;
}