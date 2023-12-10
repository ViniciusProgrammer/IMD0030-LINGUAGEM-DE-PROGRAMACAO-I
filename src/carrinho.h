#ifndef CARRINHO_H
#define CARRINHO_H

#include <iostream>
#include <vector>

#include "produto.h"
#include "cliente.h"


class Carrinho : public Produto, public Cliente
{
    private:
        std::vector <Produto> produtos;
    public:
        Carrinho();
        Carrinho(std::string nome, std::string cpf, std::string dataNascimento,
                std::string genero, std::string rua, int numero, std::string bairro,
                std::string cidade, std::string cep, std::vector<Produto> produtos);
};

#endif
