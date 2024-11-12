#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto(const string& nomeMoto, const string& guidao) : Veiculo(nomeMoto), tipoGuidao(guidao) {}

void Moto::mostrarDetalhes() const {
    cout << "Moto: " << nome << ", Tipo de guidão: " << tipoGuidao << endl;
}

void Moto::salvarDetalhes(ofstream& arquivo) const {
    arquivo << "Moto: " << nome << ", Tipo de guidão: " << tipoGuidao << endl;
}
