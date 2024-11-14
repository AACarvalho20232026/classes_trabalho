#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(const string nomeCarro, int portas) : Veiculo(nomeCarro), numeroPortas(portas) {}

void Carro::mostrarDetalhes() {
    cout << "Carro: " << nome << ", Número de portas: " << numeroPortas << endl;
}

void Carro::salvarDetalhes(ofstream& arquivo) {
    arquivo << "Carro: " << nome << ", Número de portas: " << numeroPortas << endl;
}
