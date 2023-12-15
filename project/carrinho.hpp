#ifndef CARRINHO_H
#define CARRINHO_H

#include <iostream>
#include <vector>

#include "produto.hpp"
#include "cliente.hpp"

class Carrinho : public Produto, public Cliente
{
    private:
        std::string idCompra;
    public:
        Carrinho();
        Carrinho(std::string nome, std::string cpf, std::string dataNascimento,
                std::string genero, std::string rua, int numero, std::string bairro,
                std::string cidade, std::string cep, std::string estado,
                std::string nome_produto, std::string id_produto, float preco, int quantidade, std::string idCompra);

        void setIdCompra(std::string idCompra);
        std::string getIdCompra(); 
};

#endif
