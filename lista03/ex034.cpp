#include <iostream>
using namespace std;

int main () {
    char local, comida, dia;
    int praia = 0, hotel = 0, churrasco = 0, feijoada = 0, massa = 0, sabado = 0, domingo = 0;
    int continuar, maiorlocal, maiorcomida, maiordia;

    do {
        cout << "Escolha o local (digite p (praia) ou h (hotel-fazenda)): ";
        cin >> local;
        cout << endl;
            
            while (local != 'p' && local != 'P' && local != 'h' && local != 'H') {
                cout << "Escolha uma opcao valida (p ou h): ";
                cin >> local;
            }
        
            if (local == 'p' || local == 'P') {
                praia++;
            }
            if (local == 'h' || local == 'H') {
                hotel++;
            }

        cout <<"Escolha a comida (digite c (churrasco), f (feijoada) ou m (massa)): ";
        cin >> comida;
        cout << endl;

            while (comida != 'c' && comida != 'C' && comida != 'f' && comida != 'F' && comida != 'm' && comida != 'M') {
                cout << "Escolha uma opcao valida (c, f ou m): ";
                cin >> comida;
            }

            if (comida == 'c' || comida == 'C') {
                churrasco++;
            }

            if (comida == 'f' || comida == 'F') {
                feijoada++;
            }
            if (comida == 'm' || comida == 'M') {
                massa++;
            }

        cout << "Escolha o dia preferido (digite s (sabado) ou d (domingo)): ";
        cin >> dia;
        cout << endl;

            while (dia != 's' && dia != 'S' && dia != 'd' && dia != 'D') {
                cout << "Escolha uma opcao valida (s ou d): ";
                cin >> dia;
            }

            if (dia == 's' || dia == 'S') {
                sabado++;
            }

            if (dia == 'd' || dia == 'D') {
                domingo++;
            }
            
        cout << "Deseja continuar? (1 (sim) ou qualquer tecla (nao)): ";
        cin >> continuar;

    } while (continuar == 1);

    if (praia > hotel) {
        cout << "Local mais votado: praia." << endl;
        cout << "Votos: " << praia << endl;
        cout << endl;
    }
    else if (hotel > praia) {
        cout << "Local mais votado: hotel-fazenda" << endl;
        cout << "Votos: " << hotel << endl;
        cout << endl;
    }
    else {
        cout << "Houve empate de votos entre os locais";
        cout << "Votos para praia: " << praia << endl;
        cout << "Votos para hotel-fazenda: " << hotel << endl;
        cout << endl;
    }

    if (churrasco > feijoada && churrasco > massa) {
        cout << "Comida mais votada: Churrasco" << endl;
        cout << "Votos: " << churrasco << endl;
        cout << endl;
    }
    else if (feijoada > churrasco && feijoada > massa) {
        cout << "Comida mais votada: Feijoada" << endl;
        cout << "Votos: " << feijoada << endl;
        cout << endl;
    }
    else if (massa > churrasco && massa > feijoada) {
        cout << "Comida mais votada: Massa" << endl;
        cout << "Votos: " << massa << endl;
        cout << endl;
    }
    else if (churrasco == feijoada && churrasco > massa) {
        cout << "Empate entre churrasco e feijoada" << endl;
        cout << endl;
    }
    else if (churrasco == massa && churrasco > feijoada) {
        cout << "Empate entre churrasco e massa" << endl;
        cout << endl;
    }
    else if (feijoada == massa && feijoada > churrasco) {
        cout << "Empate entre feijoada e massa" << endl;
        cout << endl;
    }
    else {
        cout << "Empate triplo entre churrasco, feijoada e massa" << endl;
        cout << endl;
    }

    if (sabado > domingo) {
        cout << "Dia mais votado: sabado." << endl;
        cout << "Votos: " << sabado << endl;
        cout << endl;
    }
    else if (domingo > sabado) {
        cout << "Dia mais votado: domingo" << endl;
        cout << "Votos: " << domingo << endl;
        cout << endl;
    }
    else {
        cout << "Houve empate de votos entre os dias" << endl;
        cout << "Votos para sabado: " << sabado << endl;
        cout << "Votos para domingo: " << domingo << endl;
        cout << endl;
    }

return 0;
}