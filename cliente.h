#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
#include <vector>
#include "carrinho.h"
#include "produto.h"

using namespace std;
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
        Cliente();
        ~Cliente();

        Cliente ( const Cliente& outros);
        Cliente& operator = ( const Cliente& outros);

        void set_nome( const string& nome );
        void set_idade( int idade );
        void set_cpf( const string& cpf );
        void set_email( const string& email);
        void set_endereco( const string& endereco );
        void set_nascimento( const string& data_nascimento );
        void set_carrinho( Carrinho* novo_carrinho );

        string get_nome() const;
        int get_idade() const;
        string get_cpf() const;
        string get_email() const;
        string get_endereco() const;
        string get_nascimento() const;
        Carrinho* get_carrinho() const;

        void imprime_dados() const;
};

#endif
