#ifndef VEICULO_H  //evita erros
#define VEICULO_H

#include <string>
#include <fstream>

using namespace std;

class Veiculo {
protected:  //nao passa para as outras classes
    string nome;

public:
    Veiculo(const string& nomeVeiculo);
    void mostrarDetalhes();
    void salvarDetalhes(ofstream& arquivo);
};
#endif
