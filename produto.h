#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

using namespace std;

class Produto
{
    private:
        string nome_produto;
        int quantidade;
    
    public:
        Produto( string nome = "", int quantidade = 0 );

        string get_nomeproduto() const;
        int get_quantidade() const; 
};

#endif