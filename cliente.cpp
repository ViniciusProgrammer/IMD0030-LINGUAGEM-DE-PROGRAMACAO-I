#include "cliente.h"
#include <iostream>
#include <string>

using namespace std;

Produto :: Produto( string nome, int quantidade ) : nome_produto( nome ), quantidade( quantidade ) {}

string Produto :: get_nomeproduto() const 
{
    return nome_produto;
}

int Produto :: get_quantidade() const
{
    return quantidade;
}

void Carrinho :: adicionarProdutos( string nome, int quantidade )
{
    produtos.push_back(Produto( nome, quantidade ));
}

void Carrinho :: mostraCompras() const 
{
    for( const Produto& produto : produtos)
    {
        cout << "Produto " << produto.get_nomeproduto() << ", Quantidade " << produto.get_quantidade() << endl;
    }
}

void Carrinho :: removerProduto( string nome ) 
{
    for(auto i = produtos.begin(); i != produtos.end(); ++i)
    {
        if(i -> get_nomeproduto() == nome)
        {
            produtos.erase(i);
            cout << "Produto removido" << endl;

            return;
        }
    }
    cout << "Produto não encontrado no carrinho" << endl;
}

void Cliente :: set_nome( string nome)
{
    this -> nome = nome;
}

void Cliente :: set_idade( int idade )
{
    this -> idade = idade;
}

void Cliente :: set_cpf( string cpf )
{
    this -> cpf = cpf;
}

void Cliente :: set_email( string email )
{
    this -> email = email;
}
        
void Cliente :: set_endereco( string endereco )
{
    this -> endereco = endereco;
}

void Cliente :: set_nascimento( string data_nascimento )
{
    this -> data_nascimento = data_nascimento;
}

string Cliente :: get_nome()
{
    return nome;
}

int Cliente :: get_idade()
{
    return idade;
}

string Cliente :: get_cpf()
{
    return cpf;
}

string  Cliente :: get_email()
{
    return email;
}

string Cliente :: get_endereco()
{
    return endereco;
}

string Cliente :: get_nascimento()
{
    return data_nascimento;
}

void Cliente :: imprime_dados()
{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Email: " << email << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Data de Nascimento: " << data_nascimento << endl;
}