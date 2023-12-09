#include "cliente.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

//Produto :: Produto( string nome, int quantidade ) : nome_produto( nome ), quantidade( quantidade ) {}

Produto :: Produto(string nome, int quantidade) : nome_produto( nome ), quantidade( quantidade ) {};

string Produto :: get_nomeproduto() const 
{
    return nome_produto;
}

int Produto :: get_quantidade() const
{
    return quantidade;
}

void Carrinho :: adicionarProdutos( const string& nome, int quantidade )
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

void Carrinho :: removerProduto( const string& nome ) 
{
    auto i = remove_if(produtos.begin(), produtos.end(),
        [&nome](const Produto& produto) { return produto.get_nomeproduto() == nome; });

    if (i != produtos.end())
    {
        produtos.erase(i, produtos.end());
        cout << "Produto removido" << endl;
    } 
    else 
    {
        cout << "Produto não encontrado no carrinho" << endl;
    }
}

void Carrinho :: set_quantidade( int qtd )
{
    quantidade_produtos = qtd;
}

int Carrinho :: get_quantidade()
{
    return quantidade_produtos;
}

Cliente :: Cliente() : carrinho( nullptr ) {}

Cliente :: ~Cliente()
{
    if( carrinho != nullptr)
    {
        delete carrinho;
    }
}

Cliente::Cliente(const Cliente& other)
    : nome(other.nome), idade(other.idade), cpf(other.cpf), email(other.email),
      endereco(other.endereco), data_nascimento(other.data_nascimento), carrinho(nullptr)
{
    if (other.carrinho != nullptr)
    {
        carrinho = new Carrinho(*other.carrinho);
    }
}

// Encontrei essa forma para garantir que um carrinho não seja adicionado no outro para não duplicar a compra feita por outro cliente

Cliente& Cliente::operator = (const Cliente& outros)
{
    if (this != &outros)
    {
        nome = outros.nome;
        idade = outros.idade;
        cpf = outros.cpf;
        email = outros.email;
        endereco = outros.endereco;
        data_nascimento = outros.data_nascimento;

        delete carrinho; // Libera o carrinho atual
        carrinho = nullptr;

        if (outros.carrinho != nullptr)
        {
            carrinho = new Carrinho(*outros.carrinho);
        }
    }

    return *this;
}

void Cliente :: set_nome( const string& nome)
{
    this -> nome = nome;
}

void Cliente :: set_idade( int idade )
{
    this -> idade = idade;
}

void Cliente :: set_cpf( const string& cpf )
{
    this -> cpf = cpf;
}

void Cliente :: set_email( const string& email )
{
    this -> email = email;
}
        
void Cliente :: set_endereco( const string& endereco )
{
    this -> endereco = endereco;
}

void Cliente :: set_nascimento( const string& data_nascimento )
{
    this -> data_nascimento = data_nascimento;
}

void Cliente :: set_carrinho(Carrinho* novo_carrinho)
{
    if( carrinho != nullptr)
    {
        delete carrinho;
    }

    carrinho =novo_carrinho;
}

string Cliente :: get_nome() const
{
    return nome;
}

int Cliente :: get_idade() const
{
    return idade;
}

string Cliente :: get_cpf() const
{
    return cpf;
}

string  Cliente :: get_email() const
{
    return email;
}

string Cliente :: get_endereco() const
{
    return endereco;
}

string Cliente :: get_nascimento() const
{
    return data_nascimento;
}

void Cliente :: imprime_dados() const
{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Email: " << email << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Data de Nascimento: " << data_nascimento << endl;
}

Carrinho* Cliente::get_carrinho() const 
{
    return carrinho;
}
