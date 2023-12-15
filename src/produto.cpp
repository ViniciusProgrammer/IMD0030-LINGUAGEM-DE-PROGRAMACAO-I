#include <iostream>

#include "produto.hpp"

using namespace std;

Produto::Produto()
{
    this -> nome_produto = "Product";
    this -> id_produto = "00000";
    this -> preco = 0.00;
    this -> quantidade = 0;
    this -> valor_total = 0.00; 
}

Produto::Produto(string nome_produto, string id_produto, float preco, int quantidade)
{
    this -> nome_produto = nome_produto;
    this -> id_produto = id_produto;
    this -> preco = preco;
    this -> quantidade = quantidade;
    this -> valor_total = quantidade * preco;
}

string Produto::get_nomeproduto() 
{
    return nome_produto;
}

string Produto::get_idproduto()
{
    return id_produto;
}

float Produto::get_preco()
{
    return preco;
}

int Produto::get_quantidade()
{
    return quantidade;
}

float Produto::get_valortotal()
{
    return valor_total;
}

void Produto::set_nome_produto(string nome_produto)
{
    this->nome_produto = nome_produto;
}

void Produto::set_idproduto(string id_produto)
{
    this -> id_produto = id_produto;
}

void Produto::set_preco(float preco)
{
    this -> preco = preco;     
}

void Produto::set_quantidade(int quantidade)
{
    this -> quantidade = quantidade;
}
