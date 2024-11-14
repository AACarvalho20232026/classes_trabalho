#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include <fstream>

using namespace std;

class Veiculo {
protected:
    string nome;

public:
    Veiculo(const string& nomeVeiculo);
    void mostrarDetalhes() const;
    void salvarDetalhes(ofstream& arquivo) const;
};
#endif