#include <iostream>
#include <vector>

#include "carrinho.h"

using namespace std;
//string nome_produto, string id_produto, float preco, int quantidade, float valor_total
Carrinho::Carrinho(){
    this->produtos.push_back(Produto("", "", 0.00, 0, 0.00));
}

Carrinho::Carrinho(string nome, string cpf, string dataNascimento,
            string genero, string rua, int numero, string bairro,
            string cidade, string cep, vector<Produto> produtos){
    this->produtos = produtos;
}


