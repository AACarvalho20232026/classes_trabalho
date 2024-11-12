#include "Veiculo.h"

using namespace std;

class Carro : public Veiculo {
private:
    int numeroPortas;

public:
    Carro(const string& nomeCarro, int portas);
    void mostrarDetalhes() const;
    void salvarDetalhes(ofstream& arquivo) const;
};
