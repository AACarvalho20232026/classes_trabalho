#include "Veiculo.h"
#include <iostream>

using namespace std;

class Moto : public Veiculo {
private:
    string tipoGuidao;

public:
    Moto(const string& nomeMoto, const string& guidao);
    void mostrarDetalhes() const;
    void salvarDetalhes(ofstream& arquivo) const;
};