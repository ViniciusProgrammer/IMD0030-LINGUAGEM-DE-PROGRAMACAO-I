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
        Produto( string nome, int quantidade ) : nome_produto(nome), quantidade(quantidade) {}

        string get_nomeproduto() const
        {
            return nome_produto;
        }

        int get_quantidade() const 
        {
            return quantidade;
        }
};

class Carrinho
{
    private:
        vector <Produto> produtos;
    
    public:
        void adicionarProdutos( string nome, int quantidade )
        {
            produtos.push_back(Produto(nome, quantidade));
        }
    
        void mostraCompras() const
        {
            for(const Produto& Produto : produtos)
            {
                cout << "Produto: " << Produto.get_nomeproduto() << ", Quantidade " << Produto.get_quantidade() << endl;  
            }
        }
    
        void removerProduto( string nome )
        {
            for(auto i = produtos.begin(); i != produtos.end(); ++i)
            {
                if(i -> get_nomeproduto() == nome)
                {
                    produtos.erase(i);
                    cout << "Produto reovido: " << nome << endl;

                    return;
                }
            }

            cout << "Produto não encontrado no carrinho" << endl;
        }
    
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
        int numero_de_clientes;
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