#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

class Produto
{
    private:
        std::string nome_produto;
        std::string id_produto;
        float preco; 
        int quantidade; 
        float valor_total;
    public:
        Produto();
        Produto(std::string nome_produto, std::string id_produto, float preco, int quantidade);
        std::string get_nomeproduto();
        std::string get_idproduto();
        float get_preco();
        int get_quantidade();
        float get_valortotal();
        
        void set_nome_produto(std::string nome_produto);
        void set_idproduto(std::string id_produto);
        void set_preco(float preco);
        void set_quantidade(int quantidade);
}; 

#endif
