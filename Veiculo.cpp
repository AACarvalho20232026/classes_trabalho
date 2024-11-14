#include "Veiculo.h"
#include <iostream>

using namespace std;

Veiculo::Veiculo(const string& nomeVeiculo) : nome(nomeVeiculo) {}

void Veiculo::mostrarDetalhes()  {
    cout << "Veículo: " << nome << endl;
}

void Veiculo::salvarDetalhes(ofstream& arquivo)  {
    arquivo << "Veículo: " << nome << endl;
}
