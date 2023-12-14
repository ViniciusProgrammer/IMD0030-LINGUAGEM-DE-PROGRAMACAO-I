#ifndef CAIXASUPERMERCADO_HPP
#define CAIXASUPERMERCADO_HPP

#include <iostream>
#include <vector>
#include "carrinho.hpp"

class Caixa : public Carrinho{
    private:
        std::vector<Carrinho> carrinhos;
    public:
        void menuCaixa();
        void inicializarArquivo();
        void atualizarArquivo();
        void registrarCompra();
        void listarCompras();
        void buscarCompras();
        void excluirCompra();

};

#endif
