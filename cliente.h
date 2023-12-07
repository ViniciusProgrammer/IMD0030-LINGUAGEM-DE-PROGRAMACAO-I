#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Produto
{
    private:
        string nome_produto;
        int quantidade;
    
    public:
        Produto( string nome, int quantidade );
        string get_nomeproduto() const;
        int get_quantidade() const; 
};

class Carrinho
{
    private:
        vector <Produto> produtos;
    
    public:
        void adicionarProdutos( string nome, int quantidade );
        void mostraCompras() const;
        void removerProduto( string nome );
    
};

class Cliente
{
    private:
        string nome;
        int idade;
        string cpf;
        string email;
        string endereco;
        string data_nascimento;

        Carrinho* carrinho;

    public:
        void set_nome( string );
        void set_idade( int );
        void set_cpf( string );
        void set_email( string );
        void set_endereco( string );
        void set_nascimento( string );
        void set_carrinho(Carrinho* novo_carrinho);

        string get_nome();
        int get_idade();
        string get_cpf();
        string get_email();
        string get_endereco();
        string get_nascimento();
        Carrinho* get_carrinho() const;

        void imprime_dados();
};

#endif