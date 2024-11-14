// #include "Veiculo.h" opcional para indicar
#include "Carro.h"
#include "Moto.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    Carro carro("Sedan", 4);
    Moto moto("Esportiva", "Esportivo");

    // Exibir 
    carro.mostrarDetalhes();
    moto.mostrarDetalhes();

    // Salvar
    ofstream arquivo("veiculos.txt");
    if (arquivo.is_open()) {
        carro.salvarDetalhes(arquivo);
        moto.salvarDetalhes(arquivo);
        arquivo.close();
        cout << "Detalhes dos veículos salvos em 'veiculos.txt'" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
