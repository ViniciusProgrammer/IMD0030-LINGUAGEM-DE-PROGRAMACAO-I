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
        cin.ignore();
        getline(cin, nome);
        clientes[i] = new Cliente();
        clientes[i] -> set_nome(nome);

        cout << "Idade: ";
        cin >> idade;
        clientes[i] -> set_idade(idade);

        cout << "CPF: ";
        cin >> cpf;
        clientes[i] -> set_cpf(cpf);

        cout << "Email: ";
        cin.ignore();
        getline(cin, email);
        clientes[i] -> set_email(email);

        cout << "Endereço: ";
        cin.ignore();
        getline(cin, endereco);
        clientes[i] -> set_endereco(endereco);

        cout << "Data de Nascimento: ";
        cin >> data_nascimento;
        clientes[i] -> set_nascimento(data_nascimento);

        Carrinho* carrinho = new Carrinho();

        int numero_produtos;

        cout << "Informe o número de produtos para " << clientes[i] -> get_nome() << ": ";
        cin >> numero_produtos;

        for( int j = 0; j < numero_produtos; ++j)
        {
            string nome_produto;
            int quantidade;

            cout << "Produto " << j + 1 << " para " << clientes[i] -> get_nome() << ": " << endl;
            cout << "Nome do Produto: ";
            getline(cin, nome_produto);

            cout << "Quantidade: ";
            cin >> quantidade;

            carrinho -> adicionarProdutos(nome_produto, quantidade);
        }

        clientes[i] -> set_carrinho(carrinho);

    }

    for( int i = 0; i < numClientes; ++i)
    {
        cout << "Detalhes do cliente " << i + 1 << ": " << endl;
        clientes[i] -> imprime_dados();

        cout << "Produtos no carrinho para " << clientes[i] -> get_nome() << ": " << endl;
        clientes[i] -> get_carrinho() -> mostraCompras();

        delete clientes[i] -> get_carrinho();
    }

    for( int i = 0; i < numClientes; ++i)
    {
        delete clientes[i];
    }

    delete [] clientes;

    return 0;
}