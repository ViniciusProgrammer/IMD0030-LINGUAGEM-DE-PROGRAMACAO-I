#include <iostream>
#include <vector>

#include "carrinho.hpp"

using namespace std;
//string nome_produto, string id_produto, float preco, int quantidade, float valor_total
Carrinho::Carrinho(){}

Carrinho::Carrinho(string nome, string cpf, string dataNascimento,
                string genero, string rua, int numero, string bairro,
                string cidade, string cep, string estado,
                string nome_produto, string id_produto, float preco, int quantidade, string idCompra):
                Cliente(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep, estado),
                Produto(nome_produto, id_produto, preco, quantidade)
{
    this-> idCompra = idCompra;   
}

void Carrinho ::setIdCompra(std::string idCompra)
{
    this-> idCompra = idCompra;
}
        
string Carrinho :: getIdCompra()
{
    return idCompra;
} 
