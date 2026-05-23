#include <iostream>
using namespace std;

int main () {

    int quantidade;
    int nunca = 0, pouco = 0, muita = 0, contador = 0;
    float percentualnunca, percentualpouco, percentualmuita;

    do {
        cout << "Qual a sua frequencia de pratica de atividade fisica? " << endl;
        cout << "Digite: 0 - nunca, 1 - poucas vezes, 2 - muitas vezes" << endl;
        cin >> quantidade;

        while ((quantidade < 0 || quantidade > 2) && quantidade != -1) {
            cout << "Opcao invalida, digite novamente: ";
            cin >> quantidade;
        }

        if (quantidade == -1) {
            break;
        }

        if (quantidade == 0) {
            nunca++;
        }

        if (quantidade == 1) {
            pouco++;
        }

        if (quantidade == 2) {
            muita++;
        }

        contador++;
    } while (quantidade != -1);

    if (contador > 0) {
    percentualnunca = ((float)nunca/(float)contador) * 100;
    percentualpouco = ((float)pouco/(float)contador) * 100;
    percentualmuita = ((float)muita/(float)contador) * 100;
    }

    cout << "Pessoas que nunca praticam atividade fisica: " << nunca << endl;
    cout << "Pessoas que praticam atividade fisica poucas vezes: " << pouco << endl;
    cout << "Pessoas que praticam atividade fisica muitas vezes: " << muita << endl;
    cout << endl;
    cout << "Percentual de entrevistados que nunca praticam atividade fisica: " << percentualnunca << "%" << endl;
    cout << "Percentual de entrevistados que praticam atividade fisica poucas vezes: " << percentualpouco << "%" << endl;
    cout << "Percentual de entrevistados que praticam atividade fisica muitas vezes: " << percentualmuita << "%" << endl;
    cout << endl;
    cout << "Total de entrevistados: " << contador << endl;

return 0;
}