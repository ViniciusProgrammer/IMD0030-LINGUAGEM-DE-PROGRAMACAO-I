#ifndef CAIXASUPERMERCADO_HPP
#define CAIXASUPERMERCADO_HPP

#include <iostream>
#include "carrinho.h"

class Caixa : public Carrinho{
    public:
        void menuCaixa();
        void registrarCompra();
        void excluirCompra();
        void buscarCompra();
};

#endif
