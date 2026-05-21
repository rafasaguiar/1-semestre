#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    srand (time(0));

    int somaResidencial = 0;
    int somaComercial = 0;
    int somaIndustrial = 0;

    int clientesResidencial = 0;
    int clientesComercial = 0;
    int clientesIndustrial = 0;

    for (int i = 0; i < 500; i++) {

        int tipoCliente = (rand () % 3) + 1;

        int consumoCliente = (rand () % 1000) + 1;

            if (tipoCliente == 1) {
                somaResidencial = somaResidencial + consumoCliente;
                clientesResidencial++;
            }

            else if (tipoCliente == 2) {
                somaComercial = somaComercial + consumoCliente;
                clientesComercial++;
            }

            else {
                somaIndustrial = somaIndustrial + consumoCliente;
                clientesIndustrial++;
            }
    }

    cout << "Relatorio  quantidade de clientes por tipo na cidade X: " << endl;
    cout << "Total de clientes residenciais: " << clientesResidencial << endl;
    cout << "Total de clientes comerciais: " << clientesComercial << endl;
    cout << "Total de clientes industriais: " << clientesIndustrial << endl;
    cout << endl;

    cout << "Relatorio de consumo total por tipo de cliente na cidade X: " << endl;
    cout << "Consumo total de clientes residenciais: " << somaResidencial << " kWh" << endl;
    cout << "Consumo total de clientes comerciais: " << somaComercial << " kWh" << endl;
    cout << "Consumo total de clientes industriais: " << somaIndustrial << " kWh" << endl;
    cout << endl;

    float mediaResidencial = somaResidencial / clientesResidencial;
    float mediaComercial = somaComercial / clientesComercial;
    float mediaIndustrial = somaIndustrial / clientesIndustrial;

    cout << "Relatorio de consumo medio por tipo de cliente na cidade X: " << endl;
    cout << "Consumo medio de clientes residenciais: " << mediaResidencial << " kWh" << endl;
    cout << "Consumo medio de clientes comerciais: " << mediaComercial << " kWh" << endl;
    cout << "Consumo medio de clientes industriais: " << mediaIndustrial << " kWh" << endl;
    cout << endl;

return 0;
}