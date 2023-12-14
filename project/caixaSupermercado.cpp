#include <iostream>
#include <vector>
#include <fstream>

#include "caixaSupermercado.hpp"

using namespace std;

void Caixa::menuCaixa(){
    cout << "1- Registrar Compra" << endl;
    cout << "2- Listar Compras" << endl;
    cout << "3- Excluir Compra" << endl;
    cout << "4- Buscar Compra" << endl;
    cout << "5- Sair" << endl;
    cout << "Opção: ";
}

void Caixa::inicializarArquivo()
{
    fstream arquivo;
    vector<string> linhas;
    string nome, cpf, dataNascimento, genero, rua, bairro,
    cidade, cep, estado, nome_produto, id_produto, idCompra;

    float preco;

    int quantidade, numero;

    arquivo.open("carrinhos.txt", ios::in | ios::app);

    if(arquivo.is_open()){
        string linha;

        while(getline(arquivo, linha)){
            linhas.push_back(linha);
        }

        arquivo.close();
    } else{
        cout << "Erro ao abrir o arquivo!" << endl;
    }
    
    for(int i = 0; i < linhas.size(); i+= 16){
        nome = linhas[i];
        cpf = linhas[i+1];
        dataNascimento = linhas[i+2];
        genero = linhas[i+3];
        rua = linhas[i+4];
        numero = stoi(linhas[i+5]);
        bairro = linhas[i+6];
        cidade = linhas[i+7];
        cep = linhas[i+8];
        estado = linhas[i+9];
        nome_produto = linhas[i+10];
        id_produto = linhas[i+11];
        preco = stof(linhas[i+12]);
        quantidade = stoi(linhas[i+13]);
        idCompra = linhas[i+14];
        
        Carrinho novoCarrinho(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep, estado, nome_produto, id_produto, preco, quantidade, idCompra);
        carrinhos.push_back(novoCarrinho);
    }
}
void Caixa::atualizarArquivo(){
    fstream arquivo;
    arquivo.open("carrinhos.txt", ios::out);

    if(arquivo.is_open()){
        for(int i = 0; i < carrinhos.size(); i++){
            arquivo << carrinhos[i].getNome() << endl;
            arquivo << carrinhos[i].getCpf() << endl;
            arquivo << carrinhos[i].getDataNascimento() << endl;
            arquivo << carrinhos[i].getGenero() << endl;
            arquivo << carrinhos[i].getEndereco()->getRua() << endl;
            arquivo << carrinhos[i].getEndereco()->getNumero() << endl;
            arquivo << carrinhos[i].getEndereco()->getBairro() << endl;
            arquivo << carrinhos[i].getEndereco()->getCidade() << endl;
            arquivo << carrinhos[i].getEndereco()->getCep() << endl;
            arquivo << carrinhos[i].getEndereco()->getEstado() << endl;
            arquivo << carrinhos[i].get_nomeproduto() << endl;
            arquivo << carrinhos[i].get_idproduto() << endl;
            arquivo << carrinhos[i].get_preco() << endl;
            arquivo << carrinhos[i].get_quantidade() << endl;
            arquivo << carrinhos[i].getIdCompra() << endl;
            arquivo << endl;
        }
        arquivo.close();
    } else{
        cout << "Erro ao abrir o arquivo!" << endl;
    }
}

void Caixa::registrarCompra(){
    string nome, cpf, dataNascimento, genero, rua, bairro,
    cidade, cep, estado, nome_produto, id_produto, idCompra;

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
    cout << "ID da compra: ";
    cin >> idCompra;

    Carrinho novoCarrinho(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep, estado, nome_produto, id_produto, preco, quantidade, idCompra);
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
        for(int i = 0; i < carrinhos.size(); i++){
            cout << "---Dados do Cliente---" << endl;
            cout << "Nome: " << carrinhos[i].getNome() << endl;
            cout << "CPF: " << carrinhos[i].getCpf() << endl;
            cout << "Data de Nascimento: " << carrinhos[i].getDataNascimento() << endl;
            cout << "Gênero: " << carrinhos[i].getGenero() << endl;
            cout << "Rua: " << carrinhos[i].getEndereco()->getRua() << endl;
            cout << "Número: " << carrinhos[i].getEndereco()->getNumero() << endl;
            cout << "Bairro: " << carrinhos[i].getEndereco()->getBairro() << endl;
            cout << "Cidade: " << carrinhos[i].getEndereco()->getCidade() << endl;
            cout << "CEP: " << carrinhos[i].getEndereco()->getCep() << endl;

            cout << "---Dados do Produto---" << endl;
            cout << "Nome do item: " << carrinhos[i].get_nomeproduto() << endl;
            cout << "ID do item: " << carrinhos[i].get_idproduto() << endl;
            cout << "Preço: " << carrinhos[i].get_preco() << endl;
            cout << "Quantidade: " << carrinhos[i].get_quantidade() << endl;
            cout << "Valor total: " << carrinhos[i].get_valortotal() << endl;
            cout<< "ID da compra: " << carrinhos[i].getIdCompra() << endl;
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
            cout<< "ID da compra: " << carrinhos[i].getIdCompra() << endl;
            cout << endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout << "Produto não encontrado." << endl;
    }
}
