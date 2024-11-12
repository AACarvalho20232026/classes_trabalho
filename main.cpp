#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    Carro carro("Sedan", 4);
    Moto moto("Esportiva", "Esportivo");

    // Exibir detalhes diretamente no console
    carro.mostrarDetalhes();
    moto.mostrarDetalhes();

    // Salvar detalhes em um arquivo
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
