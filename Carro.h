#include "Veiculo.h"
#include <iostream>

using namespace std;

class Carro : public Veiculo {
private:
    int numeroPortas;

public:
    Carro(const string nomeCarro, int portas);
    void mostrarDetalhes() ;
    void salvarDetalhes(ofstream& arquivo);
};
