#include <iostream>
#include <string>
#include "cliente.h"

using namespace std;

int main()
{
    int numClientes;

    cout << "Informe a quantidade de clientes: ";
    cin >> numClientes;

    Cliente** clientes = new Cliente* [numClientes];
    
    for( int i = 0; i < numClientes; ++i)
    {
        string nome, cpf, email, endereco, data_nascimento;
        int idade;

        cout << "Cliente " << i + 1 << ": " <<  endl;
        cout << "Nome: ";
        cin >> nome;
        clientes[i] -> set_nome(nome);

        cout << "Idade: ";
        cin >> idade;
        clientes[i] -> set_idade(idade);

        cout << "CPF: ";
        cin >> cpf;
        clientes[i] -> set_cpf(cpf);

        cout << "Email: ";
        cin >> email;
        clientes[i] -> set_email(email);

        cout << "Endereço: ";
        cin >> endereco;
        clientes[i] -> set_email(email);

        cout << "Data de Nascimento: ";
        cin >> data_nascimento;
        clientes[i] -> set_nascimento(data_nascimento);

        Carrinho* carrinho = new Carrinho();

        int numero_produtos;

        cout << "Informe o número de produtos para " << clientes[i] -> get_nome() << ": ";
        cin >> numero_produtos;

        for( int j = 0; i < numero_produtos; ++j)
        {
            string nome_produto;
            int quantidade;

            cout << "Produto " << j + 1 << " para " << clientes[i] -> get_nome() << ": " << endl;
            cout << "Nome do Produto: ";
            cin >> nome_produto;

            cout << "Quantidade: ";
            cin >> quantidade;

            carrinho -> adicionarProdutos(nome_produto, quantidade);
        }

        

    }

    return 0;
}