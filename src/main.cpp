#include <iostream>
#include <string>
#include "cliente.h"
#include <limits>
#include <vector>
#include "carrinho.h"

using namespace std;

int main()
{
    vector<Produto> novoProduto;
    novoProduto.push_back(Produto("Cigarro", "238742", 5.50, 3, 16.50));
    Carrinho novoCarrinho("Cliente 1", "000.000.000-00", "01/01/2000", "Masculino", "Rua 1", 1, "Bairro 1", "Cidade 1", "00000-000", novoProduto);

    cout << "Dados da Compra:" << endl;
    cout << "Nome: " << novoCarrinho.getNome() << endl;
    cout << "Cidade: " << novoCarrinho.getEndereco()->getCidade() << endl;
    cout << "Nome Produto: " << novoCarrinho.get_nomeproduto() << endl;

    return 0;
}