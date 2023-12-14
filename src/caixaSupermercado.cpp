#include <iostream>
#include <vector>

#include "caixaSupermercado.h"

using namespace std;

void Caixa::menuCaixa(){
    cout << "1- Registrar Compra" << endl;
    cout << "2- Listar Compras" << endl;
    cout << "3- Excluir Compra" << endl;
    cout << "4- Buscar Compra" << endl;
    cout << "5- Sair" << endl;
    cout << "Opção: " << endl;
}

//void Caixa::inicializarArquivo();
//void Caixa::atualizarArquivo();

void Caixa::registrarCompra(){
    string nome, cpf, dataNascimento, genero, rua, bairro,
    cidade, cep, estado, nome_produto, id_produto;

    float preco;

    int quantidade, numero;

    system("clear || cls");

    cout << "       ---Registrar Compra---" << endl;
    
    cout << "---Dados do Cliente---" << endl;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "CPF: ";
    getline(cin, cpf);
    cout << "Data de Nascimento: ";
    getline(cin, dataNascimento);
    cout << "Gênero: ";
    getline(cin, genero);
    cout << "Rua: ";
    getline(cin, rua);
    cout << "Número: ";
    cin >> numero;
    cout << "Bairro: ";
    cin.ignore();
    getline(cin, bairro);
    cout << "Cidade: ";
    getline(cin, cidade);
    cout << "CEP: ";
    getline(cin, cep);
    cout << "Estado: ";
    getline(cin, estado);

    cout << "\n---Dados do Produto---" << endl;
    cout << "Nome do item: ";
    getline(cin, nome_produto);
    cout << "ID do item: ";
    getline(cin, id_produto);
    cout << "Preço: ";
    cin >> preco;
    cout << "Quantidade: ";
    cin >> quantidade;

    Carrinho novoCarrinho(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep, estado, nome_produto, id_produto, preco, quantidade);
    carrinhos.push_back(novoCarrinho);

    system("clear || cls");
    cout << "\n---Compra registrada com sucesso!\n" << endl;
}

void Caixa::listarCompras(){
    system("clear || cls");
    cout << "       --- Listar Compras ---" << endl;

    if(carrinhos.size() == 0){
        system("clear || cls");
        cout << "\n---Não há compras registradas---\n" << endl;
    } else{
        cout << "---Dados do Cliente---" << endl;
        for(int i = 0; i < carrinhos.size(); i++){
            cout << "Nome: " << carrinhos[i].getNome() << endl;
            cout << "CPF: " << carrinhos[i].getCpf() << endl;
            cout << "Data de Nascimento: " << carrinhos[i].getDataNascimento() << endl;
            cout << "Gênero: " << carrinhos[i].getGenero() << endl;
            cout << "Rua: " << carrinhos[i].getEndereco()->getRua() << endl;
            cout << "Número: " << carrinhos[i].getEndereco()->getNumero() << endl;
            cout << "Bairro: " << carrinhos[i].getEndereco()->getBairro() << endl;
            cout << "Cidade: " << carrinhos[i].getEndereco()->getCidade() << endl;
            cout << "CEP: " << carrinhos[i].getEndereco()->getCep() << endl;
        }
    }

    if(carrinhos.size() == 0){
        cout << "Não há compras registradas." << endl;
    } else{
        for(int i = 0; i < carrinhos.size(); i++){
            cout << "---Dados do Produto---" << endl;
            cout << "Nome do item: " << carrinhos[i].get_nomeproduto() << endl;
            cout << "ID do item: " << carrinhos[i].get_idproduto() << endl;
            cout << "Preço: " << carrinhos[i].get_preco() << endl;
            cout << "Quantidade: " << carrinhos[i].get_quantidade() << endl;
            cout << "Valor total: " << carrinhos[i].get_valortotal() << endl;
            cout << endl;
        }
    }
}

void Caixa :: buscarCompras() {
    bool encontrado = false;
    
    string produtoProcurado;
    cin.ignore();

    getline(cin, produtoProcurado);

    for(int i = 0; i < carrinhos.size(); i++){
        if(carrinhos[i].get_nomeproduto() == produtoProcurado){

            cout << "---Dados do Produto---" << endl;
            cout << "Nome do item: " << carrinhos[i].get_nomeproduto() << endl;
            cout << "ID do item: " << carrinhos[i].get_idproduto() << endl;
            cout << "Preço: " << carrinhos[i].get_preco() << endl;
            cout << "Quantidade: " << carrinhos[i].get_quantidade() << endl;
            cout << "Valor total: " << carrinhos[i].get_valortotal() << endl;
            cout << endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout << "Produto não encontrado." << endl;
    }
}

