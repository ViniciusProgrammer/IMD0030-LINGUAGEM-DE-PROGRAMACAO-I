#include <iostream>

#include "cliente.h"

using namespace std;

Cliente::Cliente(){}

Cliente::Cliente(string nome, string cpf, string dataNascimento,
            string genero, string rua, int numero, string bairro,
            string cidade, string cep){
    this->nome = nome;
    this->cpf  = cpf;
    this->dataNascimento = dataNascimento;
    this->genero = genero;
    this->endereco = new Endereco(rua, numero, bairro, cidade, cep);
}

string Cliente::getNome(){
    return this->nome;
}

string Cliente::getCpf(){
    return this->cpf;
}

string Cliente::getDataNascimento(){
    return this->dataNascimento;
}

string Cliente::getGenero(){
    return this->genero;
}

Endereco* Cliente::getEndereco(){
    return this->endereco;
}

void Cliente::setNome(string nome){
    this->nome = nome;
}

void Cliente::setCpf(string cpf){
    this->cpf = cpf;
}

void Cliente::setDataNascimento(string dataNascimento){
    this->dataNascimento = dataNascimento;
}

void Cliente::setGenero(string genero){
    this->genero = genero;
}

void Cliente::setEndereco(string rua, int numero, string bairro, string cidade, string cep){
    this->endereco->setRua(rua);
    this->endereco->setNumero(numero);
    this->endereco->setBairro(bairro);
    this->endereco->setCidade(cidade);
    this->endereco->setCep(cep);
    this->endereco->setCep(cep);
}